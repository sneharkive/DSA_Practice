#include<iostream>
using namespace std;
int main(){
    int n, i = 1, a = 1;
    cout<<"Enter the value: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i; j++) cout<<"  ";
        for(int k = 1; k<=i; k++) {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}