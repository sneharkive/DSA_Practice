//Given a binary matrix M of size nXm. Find the maximum area of a rectangle formed only of 1s in the given matrix.

#include<iostream>
# include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerElement(int *arr, int n){
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

vector<int> prevSmallerElement(int *arr, int n){
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

int largestRectangleArea(int *heights, int n){
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

int MaxAreaRectangle(int M[4][4], int n, int m){
    int area = largestRectangleArea(M[0], m);
    for(int i = 1; i < n; i++){
        for(int j = 0; j < m; j++){
            if(M[i][j] != 0) M[i][j] = M[i][j] + M[i-1][j];
            else M[i][j] = 0;
        }
        area = max(area, largestRectangleArea(M[i],m));
    }
    return area;
}

int main(){
    int arr[4][4] = {{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}};
    cout<<"Max Area of Rectangle : " << MaxAreaRectangle(arr, 4, 4)<<endl<<endl;
}