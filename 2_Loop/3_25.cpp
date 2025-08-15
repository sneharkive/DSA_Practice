#include<iostream>
using namespace std;
int main(){
    int n, i = 1;
    cout<<"Enter the value: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        int a = i;
        for(int j = 1; j<=i-1; j++) cout<<"  ";
        for(int k = 1; k<=n+1-i; k++) {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}