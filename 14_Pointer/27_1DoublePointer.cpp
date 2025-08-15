#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int* ptr = &a;
    int** ptr2 = &ptr; //double pointer -> to store address of pointer
    cout<<"Adress of a : "<<&a<<endl;
    cout<<"Value store at ptr : "<<ptr<<endl;
    cout<<"Address of ptr : "<<&ptr<<endl;
    cout<<"Value store at ptr2 : "<<ptr2<<endl;

    cout<<endl<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr2<<endl;

    cout<<endl<<a<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;
}