#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    int r = n+65;
    for(int i = 1; i<=n; i++){
        int a = r-i;
        for(int j = 1; j<=i; j++){
        char ch = a;
        cout<<ch<<" ";
        a++;
        } 
        cout<<endl;
    }
}