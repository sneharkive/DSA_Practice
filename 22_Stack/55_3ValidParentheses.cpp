/*You're given string 'STR' consisting solely of "{", "}", "(", ")", "[" and "]".
Determine whether the parentheses are balanced.
Ex : i/p => [()]{}[]()   o/p => Balanced
     i/p => [(])         o/p => Not Balanced
     i/p => [()]         o/p => Balanced
     i/p => ([{]})       o/p => Not Balanced*/
/*Approach :- if we get opening bracket, then stack push
              if we get closing bracket, then stack top check if it is the same type of opening bracket then pop otherwise return "Not Balanced"*/

#include<iostream>
#include<stack>
using namespace std;

string ValiParentheses(string str){
    stack < char > ch;
    for(int i = 0; i < str.length(); i++){
        char temp = str[i];
        if(temp == '(' || temp == '{' || temp == '[') ch.push(temp);
        else{
            if(!ch.empty()){
                if((temp == ')' && ch.top() == '(') ||
                   (temp == '}' && ch.top() == '{') ||
                   (temp == ']' && ch.top() == '[') ) ch.pop();
                else return "Not Balanced";
            }
            
            else return "Not Balanced";
        }
    }
    if(ch.empty()) return "Balanced";
    else return "Not Balanced";
    
}

int main(){
    string str = "({})[]";
    cout << endl << ValiParentheses(str)<<endl<<endl;
}
