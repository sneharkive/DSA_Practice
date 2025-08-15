#include<iostream>
using namespace std;
int main(){
    //only declaration
    int *p; //do not do this it is a bad practice. Always do initialisation during declaration
//here 'p' is pointing to some garbage address
    cout<<p<<endl;

    int j = 8;
    p = &j; //initialisation //do not do " *p = &j" //since we alredy declear p as pointer
    cout<<p<<endl;

//if there is nothing to initialised with then initialised with '0'
//initially u want to print it you will get segmentation fault though
    int *ptr = 0;
    cout<<ptr<<endl; //will get segmentation fault

    int i = 5;
    ptr = &i; //do not do " *ptr = &i" //since we alredy declear ptr as pointer
    cout<<ptr<<endl; //now things will be just fine

}