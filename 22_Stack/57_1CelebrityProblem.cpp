/*A celebrity is a person who is known to all but does not know anyone at a party.
If you go to a party of N people, find if there is a celebrity in the party or not.
A square NxN matrix M[][] is used to represent people at the party such that if an
element of row i and column j is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.
Note :- 1) Diagonal elements are zero always => M[i][i] == 0
        2) celebrity's corresponding row will be 0 since celebrity knows no one 
        3) celebrity's corresponding column will be 1 since everybody knows the celebrity except M[i][i] == 0
Aldo :- 
        1) Put all the elements inside the stack
        2) while(stack.size() > 1){
            int A = stack.top()  then stack.pop();
            int B = stack.top()  then stack.pop();
            if(A knows B) then A is not a celebrity then stack.push(B);
            if(B knows A) then B is not a celebrity then stack.push(A);
           }
        3) now a single element left which can be a "potential celebrity"
        4) So need to varify that this element is celebrity or not check its row & column*/

#include<iostream>
#include<stack>
using namespace std;

int FindCelebrity(int arr[3][3], int n){
    stack<int> s;
    for(int i = 0; i < n; i++) s.push(i);
    while(s.size() > 1){
        int A = s.top();
        s.pop();
        int B = s.top();
        s.pop();
        if(arr[A][B])s.push(B);
        else if(arr[B][A])s.push(A);
    }
    for(int i = 0; i < n; i++) if(arr[s.top()][i] != 0) return -1;
    for(int i = 0; i < n; i++) if(s.top() != i && arr[i][s.top()] == 0) return -1;
    return s.top();
}

int main(){
    int arr[3][3] = {{0,1,1},{0,0,0},{0,1,0}};
    cout<<endl<<"Index of Celebrity : "<<FindCelebrity(arr, 3) << endl << endl;
}
