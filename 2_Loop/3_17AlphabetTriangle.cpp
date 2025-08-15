#include<iostream>
using namespace std;
int main(){
    int n;
    char ch = 65;
    cout<<"Enter the value: ";
    cin>>n;
    for(int i = 65; i<=n+64; i++){
        for(int j = 65; j<=i; j++){
            cout<<ch<<" ";
            ch++;
        } 
        cout<<endl;
    }
}