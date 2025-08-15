//For Array we can update values of each elements in the function.
//since any array represent its base address that's why we don't need pointers to update values.

#include<iostream>
using namespace std;
void update(int x[], int size){
    x[2]=120;
    x[3]=100;
    cout<<endl<<endl<<"inside the function : "<<endl;
    for(int i = 0; i < 4; i++) cout<<x[i]<<"  ";
    cout<<endl;
}
int main(){
    int arr[4] = {1,2,3,4}; //arr also represented the address of index 0's
    for(int i = 0; i < 4; i++) cout<<arr[i]<<"  ";
    update(arr,4); //here we send the address of arr's "0 index"
    cout<<endl<<"After call the function : "<<endl;
    for(int i = 0; i < 4; i++) cout<<arr[i]<<"  ";
}