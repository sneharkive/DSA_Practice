#include<iostream>
using namespace std;
int main(){
//name of an array also represent the address of its 1st memeory block
    int arr[10] = {1,20,3,4,5,9,8,9,5,2};
    int *p = arr;
    cout<<"Address : "<<arr<<endl;
    cout<<"Address : "<<&arr[0]<<endl; //using '&' operator
    cout<<"Address : "<<&arr[2]<<endl;
    cout<<*arr<<endl; //value at 1st location
    cout<<*arr + 1 <<endl; //value of 1st location + 1 -> 1 + 1
    cout<<*(arr + 1) <<endl; ////value at 2nd location
    cout<< p[2] <<endl; //p[2] ->  *(p+2) => print arr[2]
//arr[i] = *(arr + i) //  0 <= i < n  //n-> size of array
//this is how its work inside the computer for an array
//we can also write this as ->   i[arr] = *(i + arr)
//lec 26 ->  16:00

    int i = 3;
    cout<< i[arr]<<endl; //valid
}