#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the input: "<<endl;
    cin>>ch;
    int a = ch;
    if(a>=65 && a<=90) cout<<"This is Upper Case. ";
    else if(a>=97 && a<=122) cout<<"This is Lower Case. ";
    else if(a>=48 && a<=57) cout<<"This is Numeric.";
    else cout<<"This is something else.";
}