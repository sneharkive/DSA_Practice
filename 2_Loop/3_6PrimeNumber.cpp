#include<iostream>
using namespace std;
int main(){
    int n,sum=0, i=2, c=0;
    cout<<"Enter the value: "<<endl;
    cin>>n;
    while(i<n){
        if(n%i==0) {
            c++;
            break;
        }
        i++;
    }
    if(n==1) cout<<"The given number is neither composite nor prime number.";
    else if(c==1) cout<<"The given number is composite number.";
    else cout<<"The given number is prime number."; 
}