#include<iostream>
using namespace std;
int max(int x[],int size){
    int max = x[0];
    for(int i = 0; i < size; i++)
        if(max < x[i]) max = x[i];
    return max;
}

int min(int x[], int size){
    int min = x[0];
    for(int i = 0; i < size; i++)
        if(min > x[i]) min = x[i];
    return min;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    cout<<"Maximum value element in the array is : "<< max(arr,n)<<endl;;
    cout<<"Minimum value element in the array is : "<<min(arr,n);
}