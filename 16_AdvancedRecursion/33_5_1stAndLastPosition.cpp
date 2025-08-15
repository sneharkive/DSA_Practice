/*You have been given a sorted array/list 'arr' consisting of 'n' elements.You are also 
given an integer 'k'. Now your task is to find the first & last occurrence of 'k' in 'arr'.*/
//If 'k' is not present in the array, then 1st & last occurrence will be -1.
//'arr' may contain duplicate elements
//First and Last Position of an Element in Sorted Array.
/*Ex:  arr[]={0,0,1,1,1,2,2,2,3,3}
       i/p => 2 
       o/p => 5   7     */
//BY ME
#include<iostream>
using namespace std;
int firstOcc(int arr[], int s, int e, int key, int ans){
    int mid = s + (e - s)/2;
    if(s>e) return ans;
    if(arr[mid]==key){
        ans = mid;
        return firstOcc(arr,s,mid-1,key, ans);
    }
    else if(arr[mid]<key) return firstOcc(arr,mid+1,e,key, ans);
    else return firstOcc(arr,s,mid-1,key, ans);
}

int lastOcc(int arr[], int s, int e, int key, int ans){
    int mid = s + (e - s)/2;
    if(s>e) return ans;
    if(arr[mid]==key){
        ans = mid;
        return lastOcc(arr,mid+1,e,key,ans);
    }
    else if(arr[mid]<key) return lastOcc(arr,mid+1,e,key,ans);
    else return lastOcc(arr,s,mid-1,key,ans);
}

int main(){
    int ans = -1, n = 11, arr[n] = {0,0,1,1,2,2,2,2,3,3,3};
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    cout<<"Fisrt occurance in arr : "<<firstOcc(arr,0,n-1,key,ans)<<endl;
    cout<<"Last occurance in arr : "<<lastOcc(arr,0,n-1,key,ans)<<endl;
    

}