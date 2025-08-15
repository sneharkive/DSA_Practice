/*You are given a string 'STR' consisting of lowercase English letters. Your task is
to return all permutations of the given string in lexicographically increasing order.
String A is lexicographically less than string B, if either A is prefix of B (and A != B)
or there exists such i(1 <= i <= min(|A|, |B|)), that A[i] < B[i], and for any j (1 <= j < i)
A[i] = B[i]. Here |A| denotes the length of the string A.
Given String contains unique characters.
i/p => "bca"
o/p => "abc",  "acb",  "bac",  "bca",  "cab",  "cba"*/
#include<iostream>
#include<vector>
using namespace std;
void solve (vector<string> str,int index, vector<vector<string>>& ans){
    if(index >= str.size()){
        ans.push_back(str);
        return;
    }
    for(int i = index; i < str.size(); i++){
        swap(str[index], str[i]);
        solve(str, index+1, ans);
        swap(str[index], str[i]); //Back Track

    }
}
vector<vector<string>> permutation(vector<string> str){
    vector<vector<string>> ans;
    int index = 0;
    solve(str, index, ans);
    return ans;
}

int main(){
    vector<string> str ;
    str.push_back("a");
    str.push_back("b");
    str.push_back("c");
    vector<vector<string>> v = permutation(str);
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++) cout<< v[i][j]<<"  ";
        cout<<endl;
    }
}