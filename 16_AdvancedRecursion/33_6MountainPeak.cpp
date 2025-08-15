/*First part increasing order, second part decreasing order.
Need to find the peak element means => need to find max element's index.*/
#include<iostream>
using namespace std;
int MountainPeak(int arr[], int s, int e){
    int mid = s + (e - s)/2;
    if(s==e) return s;
    else if(arr[mid]<arr[mid+1]) return MountainPeak(arr,mid+1,e);
    else return MountainPeak(arr,s,mid);
}
int main(){
    int odd = 7, arr[odd] = {0,1,2,3,4,2,1};
    int even = 4, brr[even] = {0,2,1,0};
    cout<<MountainPeak(arr,0,odd-1)<<endl;
    cout<<MountainPeak(brr,0,even-1)<<endl;
}