//SELECTION SORT
/*Selection sort is one of the sorting algorithms that works by repeatedly finding the minimum element
from the unsorted part of the array and putting it at the beginning of the unsorted region of the array.*/
#include<iostream>
using namespace std;
int min(int arr[], int n, int s = 0, int index = 0){
    if(s==n) return index;
    else if(arr[index]>=arr[s]) {
        index = s;
        return min(arr,n,s+1,index);
    }
    else if(arr[index]<arr[s]) return min(arr,n,s+1,index);
}
void selectionSort(int arr[], int n, int i = 0){
    int index = min(arr,n,i,i);
    if(i==n) return;
    swap(arr[i],arr[index]);
    return selectionSort(arr, n, i+1);
}
int main(){
    int n = 5, arr[n]={6,1,8,3,10};
    selectionSort(arr,n);
    for(int i = 0; i < n; i++)cout<<arr[i]<<"  ";
}