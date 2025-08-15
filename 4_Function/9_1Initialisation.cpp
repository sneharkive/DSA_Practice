#include<iostream>
using namespace std;
int main(){
    int a[10] = {0}; //Initialisation that way only valid for '0'
    int b[10] = {5}; //Not valid for non zero value
    int c[10];//To initialised single non zero value to array we need to use loops
    for(int i = 0; i < 10; i++) c[i] = 5;
    cout<<"Elements of array a : ";
    for(int i = 0; i < 10; i++) cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Elements of array b : ";
    for(int i = 0; i < 10; i++) cout<<b[i]<<" ";
    cout<<endl;
    cout<<"Elements of array c : ";
    for(int i = 0; i < 10; i++) cout<<c[i]<<" ";
}