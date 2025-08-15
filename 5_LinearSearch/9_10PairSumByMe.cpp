#include<iostream>
using namespace std;
void pairSum(int arr[], int size, int sum){
    for(int i = 0; i < size; i++)
        for(int j = i+1; j < size; j++)
            if(arr[i]+arr[j]==sum) cout<<arr[i]<<"  "<<arr[j]<<endl;
    return;
}
int main(){
    int s, n = 5, arr[n] = { 2,-3,3,3,-2};
    int m = 7, brr[m] = {1,2,3,4,5,6,7};
    cout<<"Enter the sum : ";
    cin>>s;
    pairSum( arr, n, s);
}