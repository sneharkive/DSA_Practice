/*BOOK ALLOCATION PROBLEM
Given an array 'arr' of integer numbers, where 'arr[i]' represents the number of pages in the 'i-th' book.
There are 'm' number of students and the task is to allocate all the books to their students. Allocated books in such way that:
1. Each student gets at least one book.
2. Each book should be allocated to a student.
3. Book allocation should be in a contigous manner.
You have to allocate the book to 'm' students such that the maximum number of pages assigned to a student is minimum.*/
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
int bookAllocation(int arr[], int n, int m){
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
    int m = 2, n = 6, arr[n] = {2,1,5,6,2,3};
    cout<<bookAllocation(arr,n,m);
}