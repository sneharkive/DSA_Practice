//SELECTION SORT
/*Selection sort is one of the sorting algorithms that works by repeatedly finding the minimum element
from the unsorted part of the array and putting it at the beginning of the unsorted region of the array.*/
#include<iostream>
using namespace std;
int min(int arr[], int s, int n){
    int min = arr[s], index = s;
    for(int i = s; i < n; i++)
        if(arr[i]<min) {
            min = arr[i];
            index = i;
        }
    return index;
}
void selectionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int index = min(arr,i,n);
        int temp = arr[i];
        arr[i]=arr[index];
        arr[index] = temp;
    }
    return;
}
int main(){
    int n = 5, arr[n]={6,2,8,4,10};
    selectionSort(arr,n);
    for(int i = 0; i < n; i++)cout<<arr[i]<<"  ";
}