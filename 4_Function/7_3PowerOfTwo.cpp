/*Given an integer n, return true, if it is a power of two. Otherwise return false.
An integer n is a power of two, if there exists an integer x such that n == 2^x.*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, p, c = 0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i = 1; i<=30; i++){
        p = pow(2,i);
        if(p==n) {
            c++;
            break;
        }
    }
    if(c>0) cout<<"True";
    else cout<<"False";
}