/*You have been given a number of stairs. Initially you are at the 0th stair, and you need to
reach the Nth stair. Each time you can either climb one step or two steps. You are supposed to 
return the number of distinct ways in which you can climb from the 0th step to Nth step.*/
#include<iostream>
using namespace std;
int stairPath(int n){
    if(n==1 || n == 2) return n;
    return stairPath(n-1) + stairPath(n-2);
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<stairPath(n);
}