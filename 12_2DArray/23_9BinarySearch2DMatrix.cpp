//Search a 2D Matrix
/*Write an efficient algorithm that searches for a value in an m*n matrix.
This matrix has the the following properties: 
-> Integres in each row are sorted from left to right.
-> The first integer of each row is greater than the last integre of the previous row*/
#include<iostream>
using namespace std;
int main(){
    int tar, r = 3, c = 4, arr[r][c] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<<"Enter the target : ";
    cin>>tar;
    int s = 0, e = r*c -1, mark = 0;
    int mid = s + (e - s) / 2;
    while(s<=e){
        int element = arr[mid/c][mid%c];
        if(element == tar) {
            mark ++;
            break;
        }
        else if(element < tar) s = mid + 1;
        else e = mid - 1;
        mid = s + (e - s) / 2;
   }
   if (mark==0) cout<<"Not Found";
   else cout<<"Found";
}