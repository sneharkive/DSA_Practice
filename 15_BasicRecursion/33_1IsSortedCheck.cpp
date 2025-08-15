#include<iostream>
using namespace std;
bool isSorted(int *arr, int size){
    if(size==0 || size==1) return true;
    else if(arr[0] > arr[1]) return false;
    else return isSorted(arr+1, size-1);
}
int main(){
    int n = 6, arr[n] = {1,2,7,4,5,6};
    if(isSorted(arr, n)) cout<<"Sorted. ";
    else cout<<"Not Sorted.";
}