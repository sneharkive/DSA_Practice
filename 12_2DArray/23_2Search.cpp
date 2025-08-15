#include<iostream>
using namespace std;
string isPresent(int arr[][4],int target, int r){
    for(int i = 0; i < r; i++)
        for(int j = 0; j < 4; j++)
            if(arr[i][j]==target) return "Present";
    return "Not Present";
}
int main(){
    int tar, r = 3, c = 4, arr[r][4] = {1,2,3,4,5,6,7,8,9,1,2,3};
    cout<<"Enter the element to search : "<<endl;
    cin>>tar;
    cout<<isPresent(arr,tar,r);
}