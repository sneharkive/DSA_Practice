/*You are given an array 'ARR' of integres of length N. Your task is to find the next smaller element for each of the array elements.
Next Smaller Element for an array element is the first element to the right of that element which has a value strictly smaller that that element.
If for any array element the next smaller element does not exist, you should print -1 for that array element.
Basically we Need To find 1st smaller element at right side for each element*/
#include <iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerElement(int arr[], int n){
    vector<int>ans(n);
    stack<int> s;
    s.push(-1);
    for(int i = n - 1; i >= 0; i--){
        while(s.top() >= arr[i])s.pop();
        ans [i] = s.top();
        s.push(arr[i]);
    }
    return ans;
}

int main(){
    int arr[5] = {1,8,7,12,6};
    vector<int> ans = nextSmallerElement(arr,5);
    for(int i:ans)cout<<i<<"  ";
}