/*i/p => {1,2,3,4,5,6}
  o/p => {2,1,4,3,6,5}*/
#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++) cout<<arr[i]<<"  ";
}

void swapAlternate(int arr[], int size){
    for(int i = 0; i < size; i+=2)
        if(i+1 < size) swap(arr[i],arr[i+1]);
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