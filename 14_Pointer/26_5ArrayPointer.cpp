#include<iostream>
using namespace std;
int Sum(int *arr, int n){ // we can also write it as (int *arr, int n) // same thing since array is also a pointer 
//when we pass array to a function we address of arr[0] block
//Because of that we also send a part of array to the function
    cout<<endl<<"Size : "<<sizeof(arr)<<endl; //will print size of the pointer
    int s = 0;
    for(int i = 0; i < n; i++) s = s + arr[i];
    return s;
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"Sum is : " << Sum(arr,10) <<endl; 
    cout<<"Sum of part : "<<Sum(arr+5,3) <<endl;
}