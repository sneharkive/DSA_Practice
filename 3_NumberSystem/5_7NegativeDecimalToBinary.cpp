#include<iostream>
#include<math.h>
using namespace std;
int deciToBi(int n){
    float ans = 0, i = 0;
     while(n!=0){
        int bit = n & 1;
        ans = (bit * pow(10 , i)) + ans;
        n = n >> 1;
        i++;
    }
    return ans;
}
int main(){
    int n, ans;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<0){
        n = n * (-1);
        ans = deciToBi(n);
        ans = ~ans + 1;
    }
    else ans = deciToBi(n);
    cout<<"Answer is : "<<ans;
}