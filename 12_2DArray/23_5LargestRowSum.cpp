#include<iostream>
using namespace std;
int main(){
    int s, larSum = INT16_MIN, index, r = 3, c = 3, arr[r][c] = {{13,4,11},{2,12,1},{7,8,7}};
    for(int i = 0; i < r; i++){
        s = 0;
        for(int j = 0; j < c; j++) s = s + arr[i][j];
        if(s>larSum){
            larSum = s;
            index = i;
        } 
    }
    cout<<index<<"      "<<larSum;
}