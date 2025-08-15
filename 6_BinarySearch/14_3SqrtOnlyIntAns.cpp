//Sqare Root Of Non-Negative integer. Need return the integer part only by using binary search.
//Ex: i/p => 4   o/p => 2
//    i/p => 10  o/p => 3 
#include<iostream>
using namespace std;
int sqrt (int n){
    int arr[n+1],ans;
    for(int i=0; i<=n; i++) arr[i] = i;
    for(int s=0, e=n; s<=e;){//binary search
        int mid = s + (e - s) / 2;
        if(mid*mid==n) return mid;
        else if(mid*mid>n) e = mid - 1;
        else if(mid*mid<n){
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<sqrt(n);
}