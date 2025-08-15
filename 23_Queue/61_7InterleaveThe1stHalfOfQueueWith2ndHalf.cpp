/*Interleave the first half of the queue with second half
Given a queue of integers even length, rearrange the elements by interleaving the first
half of the queue with the second half of the queue. Only a stack can be used as an auxiliary space.*/
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

void ModifyQueue(queue<int>&q){
    stack<int>s;
    int size = q.size() / 2;
    for(int i = 0; i < size; i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    for(int i = 0; i < size; i++){
        int num = q.front();
        q.pop();
        q.push(num);
    }
    for(int i = 0; i < size; i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
}

int main(){
    queue<int>q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    print(q);

    ModifyQueue(q);
    print(q);
}
