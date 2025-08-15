#include<iostream>
using namespace std;
int main(){
    int i = 3;
    int *t = &i;
    cout<<"Befor *t++ : "<<*t<<endl;
    (*t)++;
    cout<<"After *t++ : "<<*t<<endl;


    cout<<"Befor t++ : "<<t<<endl;
    t++; //t = t + 1;
    cout<<"After t++ : "<<t<<endl;
//since this pointer is int type & we know size of int is 4 
//so after t++ address will increase by 4

    double j = 4.8;
    double *p = &j;
    cout<<"Befor p++ : "<<p<<endl;
    p++; //t = t + 1;
    cout<<"After p++ : "<<p<<endl; //will increase by 8, since size of double is 8




}