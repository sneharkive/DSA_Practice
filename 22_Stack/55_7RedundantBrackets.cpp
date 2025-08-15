/*Redundant Brackets
Given valid mathematical expression in the form of a string. You are supposed to return 
true if the given expression contains a pair of redundant brackets, else return false. 
The given string only conatins '(', ')', '+', '-', '*', '/' and lowercase english letters.
Note : A pair of brackets is said to be redundant when a subexpression is surrounded by needless useless brackets.
Ex : ((a + b))      => here outside brackets is useless return true
     ((a + b) + c)  => return false No useless brackets is here*/

#include<iostream>
#include<stack>
using namespace std;

bool RedundantBracket(string s){
    stack < char > ch;
    for(int i = 0; i < s.length(); i++){
        char temp = s[i];
        if(temp == '(' || temp == '+' || temp == '-' || temp == '*' || temp == '/') ch.push(temp);
        else{
            if(temp == ')'){
                bool isRedundant = true;
                while(ch.top() != '('){
                    char top = ch.top();
                    if(ch.top() == '+' || ch.top () == '-' || ch.top () == '*' || ch.top () == '/') isRedundant = false;
                    ch.pop();
                }
                if(isRedundant == true) return true;
                ch.pop();
            }
        }
    }
    return false;
}

int main(){
    string str = "(((a+b) + b) * (a+n))";
    cout << endl << RedundantBracket(str)<<endl<<endl;
}