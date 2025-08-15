/*Given a positive integer n, generate a n x n matrix 
filled with elements from 1 to n^2 in spiral order*/
#include<iostream>
using namespace std;
int main(){
    int r = 4, c = 4, arr[r][c] = {{1,2,3,12},{4,5,6,11},{7,8,9,10},{13,14,15,16}};
    int sr = 0, er = r-1, sc = 0, ec = c-1, total = r*c, count = 0;
    while(count<total){
        for(int i = sc; count<total && i <= ec; i++){//starting row
            cout<<arr[sr][i]<<"  ";
            count++;
        }
        sr++;
        for(int i = sr; count<total && i <= er; i++){//ending column
            cout<<arr[i][ec]<<"  ";
            count++;
        }
        ec--;
        for(int i = ec; count<total && i >= sc; i--){//ending row
            cout<<arr[er][i]<<"  ";
            count++;
        }
        er--;
        for(int i = er; count<total && i >= sr; i--){//starting column
            cout<<arr[i][sc]<<"  ";
            count++;
        }
        sc++;
    }
}