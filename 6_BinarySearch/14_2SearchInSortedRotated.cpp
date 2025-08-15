//Approach 1
#include<iostream>
using namespace std;
int pivotIndex(int arr[], int n){
    int s = 0, e = n-1;
    for(;s<e;){
        int mid = s + (e - s)/2;
        if(arr[mid]>=arr[0]) s = mid + 1;
        else e = mid;
    }
    return s;
}
int binarySearch(int arr[], int s, int e, int key){
    for(;s<=e;){
        int mid = s + (e - s) / 2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) e = mid - 1;
        else s = mid + 1;
    }
    return -1;
}
int Search(int arr[], int n, int key){
    int pivot = pivotIndex(arr,n);
    if(arr[pivot]<=key && key<=arr[n-1])return binarySearch(arr, pivot, n-1, key);
    else if(arr[0]<=key) return binarySearch(arr, 0, pivot-1, key);
    else return -1;
}
int main(){
    int key, n = 6, arr[n] = {7,9,1,2,3,4};
    cout<<"Enter the key : ";
    cin>>key;
    int index = Search(arr,n,key);
    if(index==-1) cout<<"The Given key is not found.";
    else if(index>-1) cout<<"The given key is present at index :" <<index;
}