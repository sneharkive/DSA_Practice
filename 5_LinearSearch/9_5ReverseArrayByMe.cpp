#include<iostream>
using namespace std;
void reverse(int arr[], int size){
    int temp;
    for(int start=0, end=size-1; start<=size/2, end>=size/2; start++, end--){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
    return;
}
int main(){
    int n = 6, arr[n] = { 10,18,24,17,100,12};
    for(int i = 0; i < n; i++) cout<<arr[i]<<"  ";
    cout<<endl<<endl;
    reverse(arr,n);
    for(int i = 0; i < n; i++) cout<<arr[i]<<"  ";
}