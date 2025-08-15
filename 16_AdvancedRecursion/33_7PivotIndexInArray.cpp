//Given Array is sorted & then rotated
//for better understanding read notebook or watch video
#include<iostream>
using namespace std;
int pivotIndex(int arr[], int s, int e){
    int mid = s + (e - s)/2;
    if(s==e) return s;
    else if(arr[mid]>=arr[0]) return pivotIndex(arr,mid+1,e);
    else return pivotIndex(arr,s,mid);
}
int main(){
    int odd = 3, arr[odd] = {5,1,2};
    int even = 6, brr[even] = {7,9,1,2,3,4};
    cout<<"Pivot Index : "<<pivotIndex(arr,0,odd-1)<<endl;
    cout<<"Pivot Index : "<<pivotIndex(brr,0,even-1)<<endl;
}