/*You are given an array 'arr' of size 'N' containing each number 1 to 'N'-1 at least once.
There is a single integer value that is present in the array twice. Need to find the duplicate value. */
//only one duplicate present
#include<iostream>
using namespace std;
int unique(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++) ans = (ans^arr[i]);
    for(int i = 1; i < size; i++) ans = ans^i;
    return ans;
}
int main(){
    int m = 7, brr[m] = {1, 2, 3, 4, 5, 1, 6}; //odd
    cout<<unique(brr, m);
}