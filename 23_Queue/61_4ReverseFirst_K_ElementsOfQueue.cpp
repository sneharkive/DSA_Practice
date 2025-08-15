/*Given an integer K and a queue of integers, we need to reverse the order of the first 
K elements of the queue, leaving the other elements in the same relative order.
Only following standard operations are allowed on queue => enqueue(X), dequeue(), size(), front()*/

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void print(queue<int> q){
    cout<<endl;
    while(!q.empty()){
        cout<<q.front()<< "  ";
        q.pop();
    }
}

queue<int> modifyQueue(queue<int>&q, int k){
    stack<int> s;
    for(int i = 0; i < k; i++){
        int num = q.front();
        q.pop();
        s.push(num);
    }
    while(!s.empty()){
        int num = s.top();
        s.pop();
        q.push(num);
    }
    for(int i = 0; i < q.size() - k; i++){
        int num = q.front();
        q.pop();
        q.push(num);
    }
    return q;

}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    print(q);

    modifyQueue(q, 3);
    print(q);
}



