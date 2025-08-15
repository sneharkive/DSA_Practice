#include<iostream>
using namespace std;
int main(){
    int num = 5;
    int *p = &num; //to store int we need to create int type pointers
    cout<<p<<endl;//print address of num
    cout<<*p<<endl;//print the value stored in num through the pointer
    double d = 4.2;
    double *ad = &d; //to store double we need to create double type pointers
    cout<<ad<<endl;
    cout<<*ad<<endl;

//size of pointers does not depend on what kind of container's address it stored
    cout<<sizeof(p)<<endl;
    cout<<sizeof(ad)<<endl;

//modify the values using pointers
    *p = 18;
    cout<<num<<endl;

//coping a pointer
int *q = p;
cout<<p<<"     "<<q<<endl;
cout<<*p<<"     "<<*q<<endl;
}