#include<iostream>
using namespace std;

void merge(int *arr, int s, int e) {
    int mid = (s+e)/2;
    int len1 = mid - s + 1, len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) 
        first[i] = arr[mainArrayIndex++];

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) 
        second[i] = arr[mainArrayIndex++];

    //merge 2 sorted arrays     
    int index1 = 0, index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) 
            arr[mainArrayIndex++] = first[index1++];
        else arr[mainArrayIndex++] = second[index2++];
    }   

    while(index1 < len1)
        arr[mainArrayIndex++] = first[index1++];

    while(index2 < len2 ) 
        arr[mainArrayIndex++] = second[index2++];

    delete []first;
    delete []second;

}

void mergeSort(int *arr, int s, int e) {
    if(s >= e) return; //base case
    int mid = (s+e)/2;
    mergeSort(arr, s, mid); //to sort left part
    mergeSort(arr, mid+1, e); //to sort right part
    merge(arr, s, e); //merge
}

int main() {
    int n = 10, arr[n] = {4,8,5,2,3,7,1,5,9,14};
    mergeSort(arr, 0, n-1);
    for(int i=0;i<n;i++) cout << arr[i] << " ";
}