/*Minimum Cost To Make String Valid
Give string 'STR' containing either '{', '}'. 'STR' is called valid if all the bracket are balanced. 
Formally for each opening bracket, there must be a closing bracket right to it.
You need to make 'STR' valid by performing some operations on it. In one operation you can convert
'{' into '}' or vice versa, and the cost of one such operation is 1. Need to find minimum cost to make the string valid.

By SIR :-
Point to notice :- Length of string must be even to make it valid
                   If length of string odd then we cannot make it valid so then return '-1'
Invalid Part of String Pattern :- 1) {{{{......
                                  2) }}}}......
                                  3) ....}}}{{{....
Algo :- 1) if length of string is odd -> return -1
        2) remove valid part from the i/p string
        3) count No. of '{' => 'a' & No. of '}' => 'b' in the invalid part
        4) use the formula ans = ((a+1)/2) + ((b+1)/2) then  return ans*/

#include<iostream>
#include<stack>
using namespace std;

int MinCost(string &str, int count = 0){
    if (str.length() % 2 != 0) return -1; //length of string is odd 
    stack < char > ch;
    for(int i = 0; i < str.length(); i++){
        char temp = str[i];
        if(temp == '{') ch.push(temp);
        else{
            if(!ch.empty() && ch.top() == '{' ) ch.pop();
            else ch.push(temp);
        }
    }
    int a = 0, b = 0;
    while(!ch.empty()){
        if(ch.top() == '{') a++;
        else b++;
        ch.pop();
    } 
    return ((a+1)/2) + ((b+1)/2);
}

int main(){
    string str = "{}}}}{{{";
    cout<<MinCost(str)<<endl <<endl;
}
