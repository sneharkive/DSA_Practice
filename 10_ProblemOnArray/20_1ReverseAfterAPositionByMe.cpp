/*Given an array/list 'arr' of integers and a position 'M'.
You have to reverse the array after that position.*/
#include<iostream>
using namespace std;
void reverse(int arr[], int size, int m){
    for(int start=m+1,end=size-1; start<=end; start++,end--)
        swap(arr[start], arr[end]);
    return;
}
int main(){
    int m, n = 6, arr[n] = {1,2,3,4,5,6};
    cout<<"Enter the index : ";
    cin>>m;
    reverse(arr,n,m);
    for(int i = 0; i < n; i++) cout<<arr[i]<<"  ";
}