#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float i = 0, ans = 0;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0){
        float bit = (n & 1);
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout<<"Answer is : "<<ans;
}