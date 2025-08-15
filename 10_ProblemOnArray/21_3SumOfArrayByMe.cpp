/*You are given two numbers 'A' and 'B' in the form of two arrays(A[] and B[])
of lengths 'N' & 'M' respectively, where each array element represents a digit.
You need to fing the sum of these two numbers & return this sum in the form of an array.
NOTE : 1. The length of each array is greater than zero.
2. The first index of each array is the most significant digit of the number.
For example, if the array A[] = {4,5,7}, then the integer represented by this 
array is 451 and array B[] = {3,4,5} so the sum will be 451+345 = 796.
So you need to return {7,9,6}.
3. Both numbers do not have any leading zeros in them & the sum should not contain any leading zeros either.*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> sum(vector<int>v1, vector<int>v2){
    int s1 = 0, s2 = 0;
    for(int i = 0; i < v1.size() ; i++) s1 = s1*10 + v1[i];
    for(int i = 0; i < v2.size() ; i++) s2 = s2*10 + v2[i];
    int ans = s1 + s2;
    int count = 0,c = ans;
    while(c!=0){
        c = c/10;
        count++;
    }
    vector<int>arr(count);
    for(int i = count-1; i>=0; i--){
        arr[i] = ans%10;
        ans = ans / 10;
    }
    return arr;
}

int main(){
    int n1, n2, a1, a2;
    cout<<"Enter size of the two arrays : ";
    cin>>n1>>n2;
    vector<int> v1(n1);
    vector<int> v2(n2);
    cout<<"Enter the values of 1st array : "<<endl;
    for(int i = 0; i < n1; i++){ //Taking Inputs for Vector
        cin>>a1;
        v1.push_back(a1);
    }
    cout<<"Enter the values of 2nd array : "<<endl;
    for(int i = 0; i < n2; i++){ //Taking Inputs for Vector
        cin>>a2;
        v2.push_back(a2);
    }
    vector<int> arr;
    arr = sum(v1, v2);
    for(int i:arr)cout<<i<<"  ";

}