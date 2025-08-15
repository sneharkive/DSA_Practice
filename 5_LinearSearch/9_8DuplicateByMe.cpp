#include<iostream>
using namespace std;
void duplicate(int arr[], int size){
    for(int i = 0; i < size; i++){
        int c = 0;
        for(int j = 0; j < size; j++) if((arr[i]==arr[j]) && (i!=j)) c++;
        if(c!=0) cout<<arr[i]<<"  ";
    }
    return;
}
int main(){
    int n = 7, arr[n] = { 10,12,24,24,101,12,10};
    duplicate(arr, n);
}