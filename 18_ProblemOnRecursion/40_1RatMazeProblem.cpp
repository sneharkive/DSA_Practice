//Rat in a Maze Problem
/*Consider a rat placed at(0,0) in a square matrix of order N*N. It has to reach the destination at (N-1, N-1). Find all possible paths that the rat 
can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L'(left), 'R'(right).  Value 0 at a cell
in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
NOTE : In a path, no cell can be visited more than one time. Need to print in sorted order*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>>& m){
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1) return true;
    else false;
}

void solve(vector<vector<int>>& m, int n, vector<string>& ans, int x, int y, vector<vector<int>> visited, string path){
    if(x == n-1 && y == n-1){//base case
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;
    //we have 4 choices -> D, U, L, R

    //down
    int newx = x + 1, newy = y;
    if(isSafe(newx, newy, n, visited, m)){
        path.push_back('D');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back(); //backtracking
    }

    //up
    newx = x - 1, newy = y;
    if(isSafe(newx, newy, n, visited, m)){
        path.push_back('U');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back(); //backtracking
    }

    //right
    newx = x, newy = y + 1;
    if(isSafe(newx, newy, n, visited, m)){
        path.push_back('R');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back(); //backtracking
    }

    //left
    newx = x, newy = y - 1;
    if(isSafe(newx, newy, n, visited, m)){
        path.push_back('L');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back(); //backtracking
    }
    visited[x][y] = 0;

}

vector<string> FindPath(vector<vector<int>>& m, int n){
    vector<string> ans;
    if(m[0][0] == 0) return ans;
    int srcx = 0, srcy = 0;
    vector<vector<int>> visited = m;
    for(int i = 0; i < n; i++)  //initialise visited vector with '0'
        for(int j = 0; j < n; j++)
            visited[i][j] = 0;
    
    string path = "";
    solve(m, n, ans, srcx, srcy, visited, path);
    std:: sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n = 4, arr[n][n] = {{1,0,0,1}, {1,1,0,1}, {1,1,1,1},{0,1,1,1}};
    vector<vector<int>> m;
    for(int i = 0; i < n; i++){ //Copy 2D Array to 2D Vector
        vector<int> temp;
        for(int j = 0; j < n; j++) temp.push_back(arr[i][j]);
        m.push_back(temp);
    }

    vector<string> str = FindPath(m, n);
    for(int j = 0; j < str.size(); j++) cout<< str[j]<<"  ";

}