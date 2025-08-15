//Reverse a given stack of integers using recursion
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

void Reverse(stack<int> &s){
    if(s.empty()) return;
    int temp = s.top();
    s.pop();
    Reverse(s);
    InsertAtBottom(s, temp);
}

int main(){
    stack <int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    printStack(s);

    cout<<endl<<endl<<endl;
    Reverse(s);
    printStack(s);

}