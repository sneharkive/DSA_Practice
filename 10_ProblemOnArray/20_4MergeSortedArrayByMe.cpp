/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, 
and two integers m & n, representing the number of elements in nums1 & nums2 respectively.
Merge nums1 & nums2 into a single array sorted in non-decresing order.
The final sorted array should not be returned by the function, but instead be sorted inside
the array nums1. To accommodate this, nums1 has a length of m+n, where the first m elements
denote the elements that should be merged, and the last n elements are set to 0 and should
be ignored num2 has a length of n.*/
#include<iostream>
#include<vector>
using namespace std;
void merge(int arr1[], int t, int arr2[], int m){
    int i = 0, j = 0; 
    while(j<m){
        if(arr1[i] <= arr2[j]) i++;
        else if(arr1[i]>arr2[j]){
            for(int k = t-2; k>=i; k--) arr1[k+1] = arr1[k];
            arr1[i] = arr2[j];
            j++;
            i++;
        }
    }
}
int main(){
    int n, m, t;
    cout<<"Enter the size of each array : ";
    cin>>n >>m;
    t = n + m;
    int arr1[t], arr2[m];
    cout<<"Enter the value of 1st array : ";
    for(int i = 0; i < n; i++) cin>>arr1[i];
    for(int i = n; i < t; i++) arr1[i]=INT16_MAX;

    cout<<"Enter the value of 2nd array : ";
    for(int i = 0; i < m; i++) cin>>arr2[i];

    merge(arr1, t, arr2, m);
    for(int i = 0; i < t; i++)cout<<arr1[i]<<"  ";
}