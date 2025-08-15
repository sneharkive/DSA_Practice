#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b;
    char ch;
    //char ch1 = '+', ch2 = '-', ch3 = '*', ch4 = '/';
    cout<<"Enter two number : ";
    cin>>a>>b;
    cout<<"Enter the operation : ";
    cin>>ch;
    switch (ch)
    {
    case '+': cout<<a+b;
        break;
    case '-': cout<<a-b;
        break;
    case '*': cout<<a*b;
        break;
    case '/': cout<<a/b;
        break;
    case '%': cout<<a%b;
        break;
    default: cout<<"Please enter a valid operation.";
        break;
    }

}