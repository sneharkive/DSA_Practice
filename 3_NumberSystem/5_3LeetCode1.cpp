/*Given an integer number n, return the difference between
the product of its digits and the sum of its digits.*/
#include<iostream>
using namespace std;
int main(){
    int n, m, sum = 0, product = 1, result;
    cout<<"Enter a number: ";
    cin>>n;
    for(; n>0; n = n/10){
        m = n%10;
        sum = sum + m;
        product = product * m;
    }
    result = product - sum;
    cout<<result; 
}