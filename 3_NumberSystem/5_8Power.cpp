#include<iostream>
using namespace std;
int main(){
    int n, index, ans = 1;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter a index: ";
    cin>>index;
    for(int i = 1; i<=index; i++) ans = ans * n;
    cout<<ans;
}