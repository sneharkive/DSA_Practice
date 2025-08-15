//Case Sensitive
//Upper case & lower case different
#include<iostream>
using namespace std;
string Palindrome(char arr[], int len){
    int s = 0, e = len - 1;
    while(s<e)
        if(arr[s++] != arr[e--]) return "Not Palindrome";
    return "Palindrome"; 
}
int lengthChar(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) count++;
    return count;
}
int main(){
    char arr[] = "NoaoN";
    int len = lengthChar(arr);
    cout<<Palindrome(arr,len);
}