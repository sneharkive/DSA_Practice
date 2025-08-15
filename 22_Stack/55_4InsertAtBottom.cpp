/*You are given a stsck of integers 'MY-STACK' and an integre 'X'. Your task
is to insert 'X' to the bottom of 'MY-STACK' and return the updated stack.*/

#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int> s){
    if(s.empty()) return;
    int x = s.top();
    s.pop();
    cout << x << "   ";
    printStack(s);
    s.push(x);
}

void InsertAtBottom(stack<int> &s, int x){
    if(s.empty()) {
        s.push(x);
        return;
    }
    int temp = s.top();
    s.pop();
    InsertAtBottom(s, x);
    s.push(temp);
}

int main(){
    stack <int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    printStack(s);

    cout<<endl<<endl<<endl;
    InsertAtBottom(s, 6);
    printStack(s);

}