#include<iostream>
using namespace std;
int binarySearch(int arr[], int n){
    int s = 0, e = n-1;
    for(;s<e;){
        int mid = s + (e - s)/2;
        if(arr[mid]<arr[mid+1]) s = mid + 1;
        else e = mid;
    }
    return s;
}
int main(){
    int odd = 7, arr[odd] = {0,1,2,3,4,2,1};
    int even = 4, brr[even] = {0,2,1,0};
    cout<<binarySearch(arr,odd)<<endl;
    cout<<binarySearch(brr,even)<<endl;
}