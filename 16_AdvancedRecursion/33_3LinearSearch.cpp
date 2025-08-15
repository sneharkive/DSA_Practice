#include<iostream>
using namespace std;
bool LinearSearch(int *arr, int size, int tar){
    if(size==0) return false;
    else if(tar == arr[0]) return true;
    else return LinearSearch(arr+1, size-1, tar);
}
int main(){
    int tar, n = 6, arr[n] = {1,2,5,7,8,2};
    cout<<"Enter the target element : ";
    cin>>tar;
    if(LinearSearch(arr, n, tar)) cout<<"Found";
    else cout<<"Not Found";
}