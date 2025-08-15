//AGGRESSIVE COWS
/*Given an array of length 'N', where each element denotes the position of a stall. Now you have 'N' stalls and 
an integer 'k' which denotes the number of cows that are aggressive. To prevent the cows from hurting each other,
you need to assign the cows to the stalls, such that the minimum distance betwwen any two of them is as large as
possible. Return the laegest minimum distance.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int diffMaxMin(int arr[], int n){
    int maxi = arr[0], mini = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i]>maxi) maxi = arr[i];
        if(arr[i]<mini) mini = arr[i];
    }
    return maxi - mini;
}
bool isPossible(int arr[], int n, int m, int mid){
    int cowCount = 1, lastPosi = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i]-lastPosi >= mid){
            cowCount++;
            if(cowCount == m) return true;
            lastPosi = arr[i];
        }
    }
    return false;
}
int AggressiveCows(int arr[], int n, int m){
    sort(arr,arr+n);
    int s = 0, e = diffMaxMin(arr, n), ans;
    for(;s<=e;){
        int mid = s + (e - s) / 2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            s = mid + 1;
        }
        else e = mid - 1;
        }
        return ans;
}
int main(){
    int m = 2, n = 5, arr[n] = {4,2,1,3,6};
    cout<<AggressiveCows(arr,n,m);
}