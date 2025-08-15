//Given a Queue Q containing N elements. The task is to reverse the Queue.
//using Stack
#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void print(queue<int> q){
    cout<<endl;
    while(!q.empty()){
        cout<<q.front()<< "  ";
        q.pop();
    }
}

queue<int> reverse(queue<int>&q){
    stack<int>s;
    while(!q.empty()){
        int num = q.front();
        q.pop();
        s.push(num);
    }
    while(!s.empty()){
        int num = s.top();
        s.pop();
        q.push(num);
    }
    return q;
}

int main(){
    queue<int>q;
    q.push(2);
    q.push(4);
    q.push(5);
    q.push(7);
    print(q);

    reverse(q);
    print(q);
}