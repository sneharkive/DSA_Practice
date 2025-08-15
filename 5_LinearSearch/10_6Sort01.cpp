#include<iostream>
using namespace std;
void print(int arr[], int size){
    for(int i = 0; i < size; i++)cout<<arr[i]<<"  ";
    return;
}
void sort(int arr[], int size){
    int left = 0, right = size - 1;
    while(left < right){
        while(arr[left]==0 && left<right) left++;
        while(arr[right]==1 && left<right) right--;
        if (left<right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
int main(){
    int n = 9, arr[n] = {1,1,0,0,0,0,1,0,1};
    sort(arr, n);
    print(arr,n);
}