#include<iostream>
using namespace std;
int main(){
    int r, c;
    cout<<"Enter row: "<<endl;
    cin>>r;
    cout<<"Enter column: "<<endl;
    cin>>c;
    int** arr = new int*[r];
    for(int i = 0; i < r; i++) 
        arr[i] = new int[c]; //2D Array created
    
    for(int i = 0; i < r; i++) //taking input
        for(int j = 0; j < c; j++)
            cin>>arr[i][j];
    
    for(int i = 0; i < r; i++){ //output
        for(int j = 0; j < c; j++)
            cout<<arr[i][j]<<"  ";
        cout<<endl;
    }

//we need free/delete dynamic memory manually
    //releasing memory
    for(int i = 0; i < r; i++) delete[] arr[i]; //all 1D array delete -> column part delete => need to delete this part 1st

    delete[] arr; // row part delete
    
}