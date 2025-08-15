//0,1,1,2,3,5,8,13,21,........
//need to print nth fibonnacci number
#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return n-1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter the term : ";
    cin>>n;
    cout<<fibo(n);
}