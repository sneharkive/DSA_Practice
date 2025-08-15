#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
    for(int i = 0; i < size; i++)
        if(arr[i]==key) return 1;
    return 0;
}
int main(){
    int key, arr[5] = { 10,18,24,17,11};
    cout<<"Enter the key : ";
    cin>>key;
    bool found = search(arr,5,key);
    if(found) cout<<"Key is present.";
    else cout<<"Key is absent.";
}