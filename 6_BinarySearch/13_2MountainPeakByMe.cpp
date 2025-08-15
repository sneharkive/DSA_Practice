/*First part increasing order, second part decreasing order.
Need to find the peak element means => need to find max element's index.*/
#include<iostream>
using namespace std;
int binarySearch(int arr[], int n){
    for(int s = 0, e = n-1;s<=e;){
        int mid = s + (e - s)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) return mid;
        else if(arr[mid]<arr[mid+1]) s = mid + 1;
        else if(arr[mid]<arr[mid-1]) e = mid - 1;
    }
}
int main(){
    int odd = 7, arr[odd] = {0,1,2,3,4,2,1};
    int even = 4, brr[even] = {0,2,1,0};
    cout<<binarySearch(arr,odd)<<endl;
    cout<<binarySearch(brr,even)<<endl;
}