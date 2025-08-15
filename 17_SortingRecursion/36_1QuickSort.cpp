#include<iostream>
using namespace std;
int partition(int arr[], int s, int e){
    int cnt = 0, pivot = arr[s];
    for(int i = s+1; i <= e; i++)
        if(arr[i] <= pivot) cnt++;
    int pivotIndex = s + cnt;
    swap(arr[s], arr[pivotIndex]);
    for(int i = s, j = e; i < pivotIndex && j > pivotIndex; ){
        while (arr[i]<=arr[pivotIndex]) i++;
        while (arr[j]>arr[pivotIndex]) j--;
        if(i < pivotIndex && j > pivotIndex)swap(arr[i++],arr[j--]);
    }
    return pivotIndex;
}
void QuickSort(int arr[], int s, int e){
    if(s >= e) return;
    int p = partition(arr, s, e);
    QuickSort(arr, s, p-1);
    QuickSort(arr, p+1, e);
}
int main(){
    int n = 12, arr[n] = {1,4,8,5,7,12,8,2,10,3,11,6};
    QuickSort(arr, 0, n-1);
    for(int i = 0; i < n; i++) cout<<arr[i]<<"  ";
}