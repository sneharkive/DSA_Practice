//BUBBLE SORT
/*Bubble Sort is one of the sorting algorithms that works by repeatedly swapping 
the adjacent elements of the array if they are not in sorted order.
You are given an unsorted array consisting of N non-negative integers. 
Your task is to sort the array in non-decreasing order using the Bubble Sort algorithm.*/
#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    if(n==0 || n==1) return;
    for(int i = 0; i < n-1; i++)
        if(arr[i] > arr[i+1]) swap(arr[i], arr[i+1]);
    BubbleSort(arr,n-1);
}

int main(){
    int n = 6, arr[n]={14,64,25,22,12,11};
    BubbleSort(arr,n);
    for(int i = 0; i < n; i++)cout<<arr[i]<<"  ";
}