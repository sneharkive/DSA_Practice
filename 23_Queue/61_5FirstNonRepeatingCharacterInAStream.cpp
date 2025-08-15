/*Given an input stream of A of n characters consisting only of lower case alphabets.
The task is to find the first non repeating character, each time a character is inserted 
to the stream. If there is no such character then append '#' to the answer.*/

#include<iostream>
#include<queue>
#include<string>
#include<map>
using namespace std;

string FirstNonRepeating(string A){
    map<char, int> count;
    queue<int>q;
    string ans = "";
    for(int i = 0; i < A.length(); i++){
        char ch = A[i];
        count[ch]++;
        q.push(ch);
        while(!q.empty()){
            if(count[q.front()] > 1) q.pop();
            else {
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()) ans.push_back('#');
    }
    return ans;
}

int main(){
    string str = "aabc";
    cout<<FirstNonRepeating(str) << endl;
}