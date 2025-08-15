#include<iostream>
using namespace std;
int main(){
    int n,sum=0, i=1;
    cout<<"Enter the value: "<<endl;
    cin>>n;
    while(i<=n){
        sum = sum + i;
        i++;
    }
    cout<<"The sum of the series is : "<<sum;
}