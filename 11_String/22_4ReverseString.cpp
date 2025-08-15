#include<iostream>
using namespace std;
void reverse(char arr[], int len){
    int s = 0, e = len - 1;
    while(s<e) swap(arr[s++], arr[e--]); 
}
int lengthChar(char arr[]){//for char array no need to pass size of the array
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) count++;
    return count;
}
int main(){
    char arr[] = "Sneha";
    int len = lengthChar(arr);
    reverse(arr,len);
    cout<<arr<<"   "<<len;
}