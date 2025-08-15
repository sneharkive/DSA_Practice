/*Write a function that takes an unsigned(only positive integer) integer and returns the number of '1' bits it has.
(It also known as Hamming Weight) => convert the no. into binary then count how many '1' is there*/
#include<iostream>
using namespace std;
int main(){
    int n, count = 0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0){
        //checking last bit
        if(n&1) count++;
        n = n>>1; //Right Shift
    }
    cout<<"The no. of '1' in the given number is: "<<count;
}