/*The pivot index is the index where the sum of all the numbers strictly to the left
of the index is equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there
are no elements to the left. This also applies to the right edge of the array.
Return the leftmost pivot index. If no such index exists, return -1.*/

#include<iostream>
using namespace std;
int pivotIndex(int arr[], int n){
    int mid = 0; 
    for(;mid<n;){
        int lsum = 0, rsum = 0;
        for(int j = mid + 1; j < n; j++)rsum = rsum + arr[j];
        for(int i = 0; i<mid; i++) lsum = lsum + arr[i];
        if(rsum==lsum) return mid;
        else if(lsum<rsum || lsum>rsum) mid++;
    }
    return -1;
}
int main(){
    int odd = 3, arr[odd] = {1,2,3};
    int even = 6, brr[even] = {-1,-1,-1,-1,-1,0};
    cout<<"Pivot Index : "<<pivotIndex(arr,odd)<<endl;
    cout<<"Pivot Index : "<<pivotIndex(brr,even)<<endl;

}