//First In First Out
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Sneha");
    q.push("Roy");
    q.push("Hange");
    q.push("Bread");
    cout<<"First element : "<<q.front()<<endl;
    cout<<"Before POP Size : "<<q.size()<<endl;

    q.pop();
    cout<<"After POP  First element : "<<q.front()<<endl;
    cout<<"After POP Size : "<<q.size()<<endl;
    cout<<"Empty or not : "<<q.empty()<<endl;
}