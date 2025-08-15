#include<iostream>
using namespace std;
int main(){
//create 2D array
    int r = 3, c = 4, arr[r][c]; //declaration only


//taking inputs -> row wise
    for(int i = 0; i < r; i++) 
        for(int j = 0; j < c; j++)
            cin>>arr[i][j];


//taking inputs -> column wise
   /* for(int j = 0; j < c; j++) 
        for(int i = 0; i < r; i++)
            cin>>arr[i][j];*/

//taking outputs
    for(int i = 0; i < r; i++){ 
        for(int j = 0; j < c; j++)
            cout<<arr[i][j]<<"   "; 
        cout<<endl;
    }cout<<endl<<endl;


    int brr[3][4] = {1,2,3,4,5,6,7,8,9,1,2,3}; //declaration with initialisation

    for(int i = 0; i < 3; i++){ //to print
        for(int j = 0; j < 4; j++)
            cout<<brr[i][j]<<"   ";
        cout<<endl;
    }
}