#include<iostream>
using namespace std;
int SumOfArray(int *arr, int size){
    if(size==0) return 0;
    else if(size==1) return arr[0];
    else return arr[0] + SumOfArray(arr + 1, size - 1);
}
int main(){
    int n = 6, arr[n] = {1,2,5,7,8,2};
    cout<<"Sum is : "<<SumOfArray(arr,n);
}