/*You are given a three integers 'X', 'N', 'M'. Your task is to find ('X' ^ 'N') % 'M'.
A^B is defined as A raised to power B and A%C is the remainder when A is divided by C*/
#include<iostream>
using namespace std;
int modular(int x, int n, int m){
    int res = 1;
    while(n>0){
        if(n&1) res = (1LL * res * x%m)%m; //if(n&1) -> if(n is odd). It's always better to use bits since its less expensive
        x = (1LL * x%m * x%m)%m; //typecast to LongLong
        n = n>>1; //b=b/2
    }
    return res;
}
int main(){
    int x, n, m;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<"Enter the index : ";
    cin>>n;
    cout<<"Enter m : ";
    cin>>m;
    cout<<modular(x,n,m);
}