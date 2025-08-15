// INSERTION SORT

#include<iostream>
using namespace std;
void InsertionSort(int arr[], int n, int i = 1){
    if(i==n) return;
    int temp = arr[i];
    int j = i - 1;
    for(; j >= 0; j--){
        if(temp<arr[j]) arr[j+1] = arr[j]; //Shifting
        else break;
    }
    arr[j+1] = temp;
    return InsertionSort(arr,n,i+1);
}
int main(){
    int n = 7, arr[n]={10,3,7,4,8,2,11};
    InsertionSort(arr,n);
    for(int i = 0; i < n; i++)cout<<arr[i]<<"  ";
}