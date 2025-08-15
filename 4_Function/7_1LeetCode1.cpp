/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x cause 
the value to go outside the signed 32-bit integer range [-2^31,2^31-1], then return 0.*/
#include<iostream>
using namespace std;
int reverse(int n){
    int ans = 0;
    while(n!=0){
        int d = n % 10;
        if((ans>(INT32_MAX/10)) || (ans<(INT32_MIN/10))) return 0;
        ans = ans*10 + d;
        n = n / 10;
    }
    return ans;
}
int main(){
    int n, ans;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Reverse number is : "<<reverse(n);
}