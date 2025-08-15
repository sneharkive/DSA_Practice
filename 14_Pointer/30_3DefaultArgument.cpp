#include<iostream>
using namespace std;
//here start is default if give the value of start during function calls then value of start will be the given value
//if you don't give any value during function calls then start will take the value 0
//this is called default argument
//condition => you must do this from right side => meaning -> you can't make "n" a default arg. unless you make start a default arg.
//if you write => void print (int arr[], int n = 0, int start) => it is wrong
//if you write => void print (int arr[], int n = 0, int start=2) => it is right

void print(int arr[], int n, int start = 0){ 
    for(int i = start; i < n; i++)
        cout<<arr[i]<<endl;
}
int main(){
    int n = 5, arr[n] = {1,2,3,4,5};

    print (arr,n);

    cout<<endl;

    print(arr,n,2);
}