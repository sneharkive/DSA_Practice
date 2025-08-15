/*i/p => {1,2,3,4,5,6}
  o/p => {2,1,4,3,6,5}*/
#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++) cout<<arr[i]<<"  ";
}

void swapAlternate(int arr[], int size){
    int temp;
    for(int start=0, end=1; start<size-1, end<size; start+=2, end+=2){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
    return;
}
int main(){
    int n = 7, arr[n] = { 1,2,3,4,5,6,7};//odd
    printArray(arr,n);
    cout<<endl;

    int m = 6, brr[m] = {11,12,13,14,15,16};//even
    printArray(brr,m);
    cout<<endl<<endl;

    swapAlternate(arr,n);
    printArray(arr,n);
    cout<<endl;

    swapAlternate(brr,m);
    printArray(brr,m);
}