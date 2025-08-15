/*Given a string str. The task is to find the maximum occurring charater in the string str.
If more than one chracter occurs the maximum number of the time then print the lexicographically smaller character.

Return maximum occurring character in an input string.
i/p => "tesuut"
o/p => t*/  //since 't' < 'u'
#include<iostream>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a' && ch<='z') return ch;
    else return ch - 'A' + 'a';
}
char MaxOcc(string str){
    char ch = str[0], maxch=str[0];
    int maxcount = 0;
    for(int i = 0; str[i]!='\0'; i++){
    int count = 0;
        for(int j = i ; str[j] != '\0'; j++){
            if(toLowerCase(str[i]) == toLowerCase(str[j])){
                count++;
                ch = str[i];
            }
            if(maxcount<count){
                maxcount = count;
                maxch = ch;
            }
            else if(maxcount == count) maxch = min(ch,maxch);
        }
    }
    return maxch;
}
int main(){
    string str="vo";
    cout<<MaxOcc(str);
}