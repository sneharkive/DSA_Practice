/*  1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1    for n = 5 */
#include<iostream>
using namespace std;
int main(){
    int n, i = 1;
    cout<<"Enter the value: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        int a = n - i + 1;
        for(int j = 1; j<=n-i+1; j++) cout<<j<<" ";
        for(int k = 2; k<=2*i-1; k++) cout<<"* ";
        for(int l = 1; l<=n+1-i; l++){
            cout<<a<<" ";
            a--;
        }
        cout<<endl;
    }
}