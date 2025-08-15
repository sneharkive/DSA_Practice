#include<iostream>
using namespace std;
void print(int arr[], int size){
    for(int i = 0; i < size; i++)cout<<arr[i]<<"  ";
    return;
}
void sort(int arr[], int size){
    int left = 0, right = size - 1, mid = 0;
    while(mid <= right){
        if(arr[mid]==0){
            swap(arr[mid],arr[left]);
            mid++;
            left++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[right]);
            right--;
        }
        else mid++;
    }
}
int main(){
    int n = 9, arr[n] = {1,1,0,2,0,2,1,0,1};
    sort(arr, n);
    print(arr,n);
}