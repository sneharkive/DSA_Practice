//PAINTER'S PARTITION PROBLEM
/*Given an array/list of length 'n', where the array/list represents the boards and each element of the given 
array/list represents the length of each board. Some 'k' numbers of painters are available to paint these boards.
Consider that each unit of a board takes 1 unit of time to paint.
You are supposed to return the area of the minimum time to get this job done of painting all the 'n' boards under
a constraint that any painter will only paint the continuous sections of boards.*/ 
#include<iostream>
using namespace std;
int sum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++) sum = sum + arr[i];
    return sum;
}
bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1, pageSum = 0;
    for(int i = 0; i < n; i++){
        if(pageSum + arr[i] <= mid) pageSum += arr[i];
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid) return false;
            pageSum = arr[i];
        }
    }
    return true;
}
int PainterPartition(int arr[], int n, int m){
    int s = 0, e = sum(arr, n), ans;
    for(;s<=e;){
        int mid = s + (e - s) / 2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else s = mid + 1;
        }
        return ans;
}
int main(){
    int m = 2, n = 4, arr[n] = {5,5,5,5};
    cout<<PainterPartition(arr,n,m);
}