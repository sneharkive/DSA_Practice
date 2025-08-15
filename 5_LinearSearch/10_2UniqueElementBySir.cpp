/*You have been given an intrger arraylist of size N. 
where N = (2*M+1), Now in the given arraylist, 'M' numbers 
are present twice and only one number is present once.
You need to find & return that number which is unique in the arraylist.*/
#include<iostream>
using namespace std;
int unique(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++) ans = (ans^arr[i]);
    return ans;
}
//it's applicable because only one unique no. is here
/*Since we know XOR of same thing is always 0 and XOR of 0 and anything is always anything
a^a = 0 always  and  0^a = a  always*/
int main(){
    int m = 7, brr[m] = { 101,12,24,10,12,101,24}; //odd
    cout<<unique(brr, m);
}