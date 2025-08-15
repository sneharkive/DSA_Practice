#include<iostream>
using namespace std;
bool CheckPalindrome(string str, int s, int e){
    if(s>e) return true;
    if(str[s]==str[e]) CheckPalindrome(str,s+1,e-1);
    else if(str[s]!=str[e]) return false;
}
int main(){
    string str = "abba";
    if(CheckPalindrome(str, 0 , str.length()-1)) cout<<"Palindrome";
    else cout<<"Not Palindrome";
    
}