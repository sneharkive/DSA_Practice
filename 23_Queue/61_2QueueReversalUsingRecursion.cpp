//Given a Queue Q containing N elements. The task is to reverse the Queue.
//using recursion
#include<iostream>
#include<queue>
using namespace std;

void print(queue<int> q){
    cout<<endl;
    while(!q.empty()){
        cout<<q.front()<< "  ";
        q.pop();
    }
}

void reverse(queue<int>&q){
    if(q.empty())return;
    int num = q.front();
    q.pop();
    reverse(q);
    q.push(num);
}

int main(){
    queue<int>q;
    q.push(2);
    q.push(4);
    q.push(5);
    q.push(7);
    q.push(9);
    print(q);

    reverse(q);
    print(q);
}