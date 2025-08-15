/*You are given an n*n 2D matrix representing an image, rotate the image by 90 degrees(clockwise)*/
//Do not use another matrix. Need to modify the 2D matrix.
#include<iostream>
using namespace std;
int main(){
    int r = 3, c = 3, arr[r][c] = {{1,2,3},{4,5,6},{7,8,9}};
    int sr = 0, er = r-1, sc = 0, ec = c-1, total = r*c, count = 0;

    for(int i = 0; i < r; i++)//transpose
        for(int j = i + 1; j < c; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }

    for(int i = 0; i < r; i++)//reverse
        for(int s = 0, e = c - 1; s<e; s++, e--)
            swap(arr[i][s],arr[i][e]);
            
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++) cout<<arr[i][j]<<"  ";
        cout<<endl;
    }
}