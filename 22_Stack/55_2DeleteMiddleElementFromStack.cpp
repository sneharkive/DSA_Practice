//Delete middle element from stack
/*You are having a stack "ARR" of size 'N+1', your task is to delete the middlemost element so 
that the size of resulting stack is 'N'.*/
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

void DeleteMid(stack<int> &s, int size, int r = 0){
    if(r == size / 2) {
        s.pop();
        return;
    }
    int x = s.top();
    s.pop();
    DeleteMid(s, size , r+1);
    s.push(x);
}

int main(){
    stack<int>s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    printStack(s);
    DeleteMid(s, s.size());
    cout<<endl<<endl<<"After Delete Middle Element : ";
    printStack(s);
    cout<<endl << endl;
}

