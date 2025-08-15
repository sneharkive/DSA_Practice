/*You have been given a sorted array/list 'arr' consisting of 'n' elements.You are also 
given an integer 'k'. Now your task is to find the first & last occurrence of 'k' in 'arr'.*/
//If 'k' is not present in the array, then 1st & last occurrence will be -1.
//'arr' may contain duplicate elements
//First and Last Position of an Element in Sorted Array.
/*Ex:  arr[]={0,0,1,1,1,2,2,2,3,3}
       i/p => 2 
       o/p => 5   7     */
#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int ans = -1;
    for(int s = 0, e = n-1;s<=e;){
        int mid = s + (e - s)/2;
        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid]<key) s = mid + 1;
        else e = mid - 1;
    } 
    return ans;
}
int lastOcc(int arr[], int n, int key){
    int ans = -1;
    for(int s = 0, e = n-1; s <= e;){
        int mid = s + (e - s)/2;
        if(arr[mid]==key) {
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid]<key) s = mid + 1;
        else e = mid - 1;
    } 
    return ans;
}
int main(){
    int odd = 11, arr[odd] = {0,0,1,1,2,2,2,2,3,3,3};
    int even = 6, brr[even] = {0,0,4,4,4,5};
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    cout<<"Fisrt occurance in arr : "<<firstOcc(arr,odd,key)<<endl;
    cout<<"Last occurance in arr : "<<lastOcc(arr,odd,key)<<endl;
    cout<<"Fisrt occurance in brr : "<<firstOcc(brr,even,key)<<endl;
    cout<<"Last occurance in brr : "<<lastOcc(brr,even,key)<<endl;


}