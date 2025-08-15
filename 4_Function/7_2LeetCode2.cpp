/*The complement of an integer is the integer you get when you filp all 
the 0's to 1's and all the 1's to 0's in its binary representation*/
#include<iostream>
using namespace std;
int complement(int n){
    int m = n, mask = 0;
    if (n == 0) return 1; //edge case
    while(m!=0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    return ans;
}
int main(){
    int n, ans;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<complement(n);
}