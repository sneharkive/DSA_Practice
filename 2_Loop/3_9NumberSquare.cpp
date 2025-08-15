#include<iostream>
using namespace std;
int main(){
    int n,i=1,a=1;
    cout<<"Enter the value: ";
    cin>>n;
    while(i<=n){
        int j = 1;
        while(j<=n){
        cout<<a<<"  ";
        j++;
        a++;
        }
        cout<<endl;
        i++;
    }
}