/*A PHRASE is a palindrome if, after converting all uppercase letters into lowercase letters and removing all
non-alphanumeric characters, it reads the same forward and backword. Alphanumeric characters include letters and numbers.*/
#include<iostream>
using namespace std;
int lengthStr(string arr){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) count++;
    return count;
}

char toLowerCase(char ch){
    if(ch>='a' && ch<='z') return ch;
    else return ch - 'A' + 'a';
}

string Palindrome(string arr, int len){
    for(int s = 0, e = len - 1; s < e; s++, e--)
        if(toLowerCase(arr[s]) != toLowerCase(arr[e])) return "Not Palindrome";  
    return "Palindrome"; 
}

int main(){
    string str = "A man, a plan, a canal: Panama ";
    for(int i = 0; str[i] != '\0'; ){ //to remove all the special character before hand //By me
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9')) i++;
        else for(int j = i; str[j] != '\0'; j++)str[j] = str[j+1];
    }
    cout<<str<<endl<<endl;
    int len = lengthStr(str);
    cout<<Palindrome(str,len);
}