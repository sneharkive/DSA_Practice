#include<iostream>
using namespace std;
int main(){
    int n, i = 1;
    cout<<"Enter the value: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = i-1; j>0; j--) cout<<"  ";
        for(int k = 1; k<=n-i+1; k++) cout<<i<<" ";
        cout<<endl;
    }
}