#include<iostream>
using namespace std;
int main(){
    int arr[] = {11,21,31,41};
    //int *ptr = arr++; //this is an error since we can't modify symbol table 
    //we can't change address of array after it created 
    int *ptr = arr;
//we can change ptr 
    cout<<arr<<"    "<<ptr<<endl;
    cout<<*ptr<<endl;
    ptr++;
    cout<<arr<<"    "<<ptr<<endl;
    cout<<*ptr<<endl;
}