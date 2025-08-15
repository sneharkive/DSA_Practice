//Leter Combinations of a Phone Number
/*Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.
A maping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.
//Mapping =>      // 2 => "abc",  3 => "def",  4 => "ghi",  5 => "jkl",  6 => "mno",  7 => "pqrs",  8 => "tuv",  9 => "wxyz".
i/p => digits = "23"                       
o/p => ["ad","ae","af","bd","bf", "be","bd","cd", "ce", "cf"]*/
#include<iostream>
#include<vector>
using namespace std;
void solve (string digits, string output, int index, vector<string>& ans, string mapping[]){
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }
    int number = digits[index] - '0' ;
    string value = mapping[number];
    for(int i = 0; i < value.length(); i++){
        output.push_back(value[i]);
        solve(digits, output, index + 1, ans, mapping);
        output.pop_back();
    }
}
vector<string> letterCombination(string digits){
    vector<string> ans;
    if(digits.length() == 0) return ans;
    string output = "";
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
    return ans;
}

int main(){
    string digits = "69";
    vector<string> v = letterCombination(digits);
    for(int i = 0; i < v.size(); i++) cout<<v[i]<<"   ";
}