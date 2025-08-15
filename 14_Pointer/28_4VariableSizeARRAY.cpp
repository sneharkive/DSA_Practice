#include<iostream>
using namespace std;
int Sum(int *arr, int n){
    int s = 0;
    for(int i = 0; i < n; i++) s+=arr[i];
    return s;
}
int main(){
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int* arr = new int[n]; //variable size array
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout<<"The Sum is : "<<Sum(arr,n);

//we need free/delete dynamic memory manually
    //releasing memory
    delete[] arr; 
}