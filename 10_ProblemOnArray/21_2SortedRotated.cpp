#include<iostream>
using namespace std;
bool SortedRotated(int arr[], int n){
    int count = 0;
    for(int i = 1; i < n; i++)
        if(arr[i-1]>arr[i]) count++;
    if(arr[n-1]>arr[0]) count++;
    return count<=1;  //if count<=1 then return true else return false
}
int main(){
    int n = 3, arr[n] = { 1,1,1};
    bool ans = SortedRotated(arr,n);
    cout<<ans<<endl;
    int m = 6, arr2[m] = { 8,9,11,5,6,7};
    bool ans2 = SortedRotated(arr2,m);
    cout<<ans2;
}