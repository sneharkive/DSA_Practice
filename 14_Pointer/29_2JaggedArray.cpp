/*A jagged array is an array of arrays such that member arrays can be of different sizes, in 2D array terms 
for each row we can have a variable number of columns.These types of arrays are also known as Jagged arrays.*/
#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter row : "<<endl;
    cin>>r;
    int** arr = new int* [r];
    for(int i = 0; i < r; i++){
        cout<<"Enter the column for "<<i<< " row : "<<endl;
        cin>>c;
        for(int j = 0; j < c; j++) 
            arr[j] = new int[c];
        cout<<"Enter input for "<<i<<" row : "<<endl;
        for(int j = 0; j < c; j++)
            cin>>arr[i][j]; 
    }
due
    for(int i = 0; i < r; i++){ //output
        for(int j = 0; j < c; j++)
            cout<<arr[i][j]<<"  ";
        cout<<endl;
    }
}