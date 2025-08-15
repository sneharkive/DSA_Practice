#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    for(int s = 0, e = n-1;s<=e;){
        int mid = s + (e - s)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key) s = mid + 1;
        else e = mid - 1;
    } 
    return -1;
}
int main(){
    int odd = 9, arr[odd] = {1,4,8,9,10,13,27,30,35};
    int even = 6, brr[even] = {1,5,8,9,15,30};
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    cout<<binarySearch(arr,odd,key)<<endl;
    cout<<binarySearch(brr,even,key)<<endl;
}