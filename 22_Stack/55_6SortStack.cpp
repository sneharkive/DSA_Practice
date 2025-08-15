//You're given a stack consisting of 'N' integers. Your task is to sort this stack in decending order using recursion
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

void SortedInsert(stack<int> &s, int temp){
    if(s.empty() || (s.top() <= temp)) {
        s.push(temp);
        return;
    }
    int num = s.top();
    s.pop();
    SortedInsert(s, temp);
    s.push(num);
}

void SortStack(stack<int> &s){
    if(s.empty()) return;
    int temp = s.top();
    s.pop();
    SortStack(s);
    SortedInsert(s, temp);
}

int main(){
    stack <int> s;
    s.push(5);
    s.push(8);
    s.push(1);
    s.push(7);
    printStack(s);

    cout<<endl<<endl;
    SortStack(s);
    printStack(s);
}