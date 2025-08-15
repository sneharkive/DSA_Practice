#include<iostream>
using namespace std;
void intersection(int arr[], int size1, int brr[], int size2){
    for(int i=0; i<size1; i++)
        for(int j=0; j<size2; j++)
            if(arr[i]==brr[j]){
                cout<<arr[i]<<"  ";
                break;
            }
    return;
}
int main(){
    int n = 6, arr[n] = { 10,12,24,101,12,2};
    int m = 5, brr[m] = {1,2,10,101, 10};
    intersection(arr, n,brr,m);
}