#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"Enter the value: ";
    cin>>n;
    while(i<=n){
        int j = n;
        while(j>=1){
        cout<<"  "<<j;
        j--;
        }
        cout<<endl;
        i++;
    }
}