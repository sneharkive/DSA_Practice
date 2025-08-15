#include<iostream>
using namespace std;
void tripletSum(int arr[], int size, int sum){
    for(int i = 0; i < size; i++)
        for(int j = i+1; j < size; j++)
            for(int k = j+1; k<size; k++)
                if(arr[i]+arr[j]+arr[k]==sum) cout<<arr[i]<<"  "<<arr[j]<<"  "<<arr[k]<<endl;
    return;
}
int main(){
    int s, n = 5, arr[n] = {1,2,3,4,5};
    int m = 7, brr[m] = {1,2,3,4,5,6,7};
    cout<<"Enter the sum : ";
    cin>>s;
    tripletSum( arr, n, s);
}