//By Me
#include<iostream>
using namespace std;
string OddEven(int n){
    if(n==0) return "Zero";
    else if (n%2==0) return "Even"; 
    else return "Odd";
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    string ans = OddEven(n);
    cout<<ans;
}