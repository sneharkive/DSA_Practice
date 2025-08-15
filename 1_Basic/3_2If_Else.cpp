#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value: "<<endl;
    cin>>a;
    if(a>0) cout<<"The number is positive.";
    else if(a<0) cout<<"The number is negative.";
    else cout<<"The number is zero.";
}