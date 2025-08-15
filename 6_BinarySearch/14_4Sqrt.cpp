#include<iostream>
using namespace std;
long long int sqrtint (int n){ // taking 'long long int' so that we can take very big value as input
    long long int ans;
    for(int s=0, e=n; s<=e;){//binary search
        long long int mid = s + (e - s) / 2;
        long long int sq = mid * mid;
        if(sq==n) return mid;
        else if(sq>n) e = mid - 1;
        else if(sq<n){
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}
double sqrt(int n, int m){
    double ans = sqrtint(n);
    double fact = 1;
    for(int i = 0; i < m; i++){
        fact = fact / 10;
        for(double j = ans; j*j < n ; j = j+fact) ans = j;
    }
    return ans;
}
int main(){
    int n,m;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"No. of decimal u want : ";
    cin>>m;
    cout<<sqrt(n,m);
}