#include<iostream>
using namespace std;
long long int sqrtint (int n, int e, int s = 0){  //default argument
    long long int mid = s + (e - s) / 2;
    long long int sq = mid * mid;
    long long int sq1 = (mid + 1) * (mid + 1);
    if(sq==n) return mid;
    else if(sq<n && sq1>n) return mid;
    else if(sq>n) return sqrtint(n,mid-1,s);
    else if (sq<n) return sqrtint(n,e,mid+1);
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<sqrtint(n,n);
}