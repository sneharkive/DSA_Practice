/*Given an array of integres heights representing the histogram's bar height where 
the width of each bar is 1, return the area of the largest rectangle in the histogram.*/
#include <iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> arr, int n){
    vector<int>ans(n);
    stack<int> s;
    s.push(-1);
    for(int i = n - 1; i >= 0; i--){
        while(s.top() != -1 && arr[s.top()] >= arr[i])s.pop();
        ans [i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(vector<int> arr, int n){
    vector<int>ans(n);
    stack<int> s;
    s.push(-1);
    for(int i = 0; i < n; i++){
        while(s.top() != -1 && arr[s.top()] >= arr[i])s.pop();
        ans [i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<int>& heights){
    int n = heights.size();
    vector<int>next(n);
    next = nextSmallerElement(heights, n);
    vector<int>prev(n);
    prev = prevSmallerElement(heights, n);
    int area = INT16_MIN;
    for(int i = 0; i < n; i++){
        int l = heights[i];
        if(next[i] == -1) next[i] = n;
        int b = next[i] - prev[i] - 1; //breath
        int newArea = l * b;
        area = max(area, newArea);
    }
    return area;
}

int main(){
    vector<int>heights;
    heights.push_back(2);
    heights.push_back(1);
    heights.push_back(5);
    heights.push_back(6);
    heights.push_back(2);
    cout<<endl<<largestRectangleArea(heights)<<endl<<endl;
}