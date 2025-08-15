//You have been given a string 'STR' of words. You need to replace all the spaces between words with "@40".
//By using extra string
#include<iostream>
using namespace std;
string Replace(string str){
    string temp = "";
    for (int i = 0; str[i]!='\0';i++){
            if (str[i] == ' ')
            {
                temp.push_back('@');
                temp.push_back('4');
                temp.push_back('0');
            }
            else temp.push_back(str[i]);
        }
    return temp;
}
int main(){
    string str = "My name is levi";
    cout<<Replace(str)<<endl;
    cout << str;
}