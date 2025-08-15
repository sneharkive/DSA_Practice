//Given Array is sorted & then rotated
//for better understanding read notebook or watch video
#include<iostream>
using namespace std;
int pivotIndex(int arr[], int n){
    int s = 0, e = n-1;
    for(;s<e;){
        int mid = s + (e - s)/2;
        if(arr[mid]>=arr[0]) s = mid + 1;
        else e = mid;
    }
    return s;
}
int main(){
    int odd = 3, arr[odd] = {5,1,2};
    int even = 6, brr[even] = {7,9,1,2,3,4};
    cout<<"Pivot Index : "<<pivotIndex(arr,odd)<<endl;
    cout<<"Pivot Index : "<<pivotIndex(brr,even)<<endl;

}