#include<iostream>
using namespace std;
int unique(int arr[], int size){
    for(int i = 0; i < size; i++){
        int c = 0;
        for(int j = 0; j < size; j++) if((arr[i]==arr[j]) && (i!=j)) c++;
        if(c==0) return arr[i];
    }
}
int main(){
    int n = 6, arr[n] = { 10,12,24,101,12,10}; //even
    cout<<unique(arr, n);
    cout<<endl;
    int m = 7, brr[m] = { 10,12,24,101,12,10,24}; //odd
    cout<<unique(brr, m);
}