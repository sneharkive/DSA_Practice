//i/p -> arr[r][c] = {{3,4,11},{2,12,1},{7,8,7}};
//o/p -> 3 2 7 8 12 4 11 1 7
#include<iostream>
using namespace std;
int main(){
    int r = 3, c = 3, arr[r][c] = {{13,4,11},{2,12,1},{7,8,7}};
    for(int i = 0; i < c; i++){
       
        if (i%2==0) for(int j = 0; j < r; j++) cout<<arr[j][i]<<"   ";
        else for(int j = r-1; j >= 0; j--) cout<<arr[j][i]<<"   ";

    }
}