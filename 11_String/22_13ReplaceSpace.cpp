//You have been given a string 'STR' of words. You need to replace all the spaces between words with "@40".
//Without using extra extra string
#include<iostream>
using namespace std;
void rightShift(string str, int end, int len){
    for(int j = len; j!=end; j--)str[j+1] = str[j]; 
    return;
}
string Replace(string str){
    int len = str.length();
    for(int i = 0; str[i] != '\0';){
        if(str[i]==' '){
            rightShift(str,i,len);
            str[i] = '@';
            i++;
            rightShift(str,i,len);
            str[i] = '4';
            i++;
            rightShift(str,i,len);
            str[i] = '0';
            i++;
        }
        else i++;
    }
    return str;
}due
int main(){
    string str = "My name is levi";
    int len = str.length();
    cout<<Replace(str)<<endl;
    //rightShift(str,5,len);
    cout << str;
}