#include<iostream>
using namespace std;
int main(){
    double arr[10];
    cout<<sizeof(arr)<<endl; //print the size of the entire array //since size of double is 8 so ans will be 10*8 = 80
    double *ptr = &arr[0];
    cout<<sizeof(ptr)<<endl; //print only the size of the pointers
    cout<<sizeof(*ptr)<<endl; //print the size 1st block arr[0]

    cout<<&ptr<<endl; //address of the pointer
}