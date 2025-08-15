//Subsequences of String
/*You are given a string 'STR' containing lowercase English letters from a to z inclusive. Your task is to find all non-empty possible subsequences of 'STR'.
A subsequences of string is the one which is generates by deleting 0 or more letters from the string and keeping the rest of the letters in the same order.
i/p format => The 1st line of i/p contains an integer 'T' denoting the number of test cases. Then T test cases follow.The 1st & only line of each test case contains string 'STR'.
o/p format => For each test case, print the subsequences of the string 'STR' separated by space.*/

#include<iostream>
#include<vector>
using namespace std;
void solve(vector<string>str, vector<string>output, int index, vector<vector<string>>& ans){
    if(index >= str.size()) { //base case
        if(output.size() > 0)ans.push_back(output);
        return;
    }
    solve(str, output, index+1, ans);   //exclude

    string element = str[index];
    output.push_back(element);
    solve(str, output, index+1, ans);
}

vector<vector<string>> subsets(vector<string>& str){
    vector<vector<string>> ans;
    vector<string> output; 
    int index = 0;
    solve(str,output, index, ans);
    return ans;
}
int main(){
    vector<string> str;
    str.push_back("a");
    str.push_back("b");
    str.push_back("c");
    vector<vector<string>>v = subsets(str);

//to print 2d vector
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++) cout<< v[i][j]<<"  ";
        cout<<endl;
    }
}