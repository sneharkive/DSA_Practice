#include<iostream>
using namespace std;
bool BinarySearch(int *arr, int s, int e, int tar){
    int mid = s + (e - s) / 2;
    if(s>e) return false;
    else if (arr[mid] == tar) return true;
    else if(arr[mid] < tar) return BinarySearch(arr, mid+1, e, tar);
    else if(arr[mid] > tar) return BinarySearch(arr, s, mid-1, tar);
}
int main(){
    int tar, n = 6, arr[n] = {1,2,5,7,8,10};
    cout<<"Enter the target element : ";
    cin>>tar;
    if(BinarySearch(arr, 0, n-1, tar)) cout<<"Found";
    else cout<<"Not Found";
}