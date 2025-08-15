//Place all 'zero' at right side.
//i/p => {0,1,0,3,2}
//o/p => {1,3,2,0,0}
#include<iostream>
using namespace std;
void moveZero(int arr[], int n){
    int i = 0; // i -> non-zero
    for(int j = 0; j < n; j++)
        if(arr[j]!=0) {
            swap(arr[j],arr[i]);
            i++;
        }
}
int main(){
   int n = 7, arr[n]={2,0,1,3,0,0,0};
   moveZero(arr,n);
   for(int i = 0; i < n; i++)cout<<arr[i]<<"  ";
}