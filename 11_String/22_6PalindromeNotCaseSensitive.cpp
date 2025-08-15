/*You are given a string 's'. Your task is to check whether the string is palindrome or not.
For checking palindrome, consider alphabets & numbers only and ignore the symbols and whitespaces.
String 's' is NOT CASE SENSITIVE.*/
//Here I use char array instead of string
#include<iostream>
using namespace std;
int lengthChar(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) count++;
    return count;
}

char toLowerCase(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')) return ch;
    else return ch - 'A' + 'a';
}
string Palindrome(char arr[], int len){
    for(int s = 0, e = len - 1; s < e; s++, e--)
        if(toLowerCase(arr[s]) != toLowerCase(arr[e])) return "Not Palindrome";  
    return "Palindrome"; 
}

int main(){
    char str[] = "2N/=o1*/*1o.-*+/*&$ n2";
    for(int i = 0; str[i] != '\0'; ){ //to remove all the special character before hand //By me
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9')) i++;
        else for(int j = i; str[j] != '\0'; j++)str[j] = str[j+1];
    }
    cout<<str<<endl;
    int len = lengthChar(str);
    cout<<Palindrome(str,len)<<endl;
}