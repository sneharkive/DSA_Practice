#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    for(int i = 65; i<=n+64; i++){
        int a = i;
        for(int j = 65; j<=n+64; j++){
        char ch = a;
        cout<<ch<<" ";
        a++;
        } 
        cout<<endl;
    }
}