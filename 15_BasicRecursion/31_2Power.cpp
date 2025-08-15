#include<iostream>
using namespace std;
int power(int n, int index){
    if (index==0) return 1; 
    return n * power(n, index-1);
}
int main(){
    int n, index;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the index : ";
    cin>>index;
    cout<<power(n, index);
}