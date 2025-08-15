//Search a 2D Matrix II
/*Write an efficient algorithm that searches for a value in an m*n matrix.
This matrix has the the following properties: 
-> Integres in each row are sorted in ascending from left to right.
-> Integers in each column are sorted in ascending from top to bottom.*/
#include<iostream>
using namespace std;
int main(){
    int tar, r = 5, c = 5, arr[r][c] = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    cout<<"Enter the target : ";
    cin>>tar;
    int rowIndex = 0, colIndex = c - 1;
    int s = 0, e = r*c -1, mark = 0;
    int mid = s + (e - s) / 2;
    while(rowIndex < r && colIndex >= 0){
        int element = arr[rowIndex][colIndex];
        if(element == tar) {
            mark ++;
            break;
        }
        else if(element < tar) rowIndex++;
        else colIndex--;
        mid = s + (e - s) / 2;
   }
   if (mark==0) cout<<"Not Found";
   else cout<<"Found";
}