#include<iostream>
using namespace std;
int main(){
    char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout<< p <<endl; //will print bcde since we did p++

    cout<<endl<<endl;
    char str[] = "babbar";
    char *s = str;
    cout<<str[0] << "  "<<s[0]<<endl;
}