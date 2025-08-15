/*Taking two number as i/p. Output should be total no. of set bits present in this two number. 
SET BITS => no. of 1 present in their binary representation*/
#include<iostream>
using namespace std;
int SetBitCount(int a){
    int ac = 0, i = 0;
    while(a!=0){
        float bit = (a & 1);
        if(bit==1) ac++;
        a = a >> 1;
        i++;
    }
    return ac;
}
int main(){
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    cout<<SetBitCount(a) + SetBitCount(b);
}