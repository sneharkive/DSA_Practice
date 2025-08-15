//Queue :- First In First Out
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
int main(){
    queue<int>q;
    q.push(2);
    q.push(5);
    q.push(7);
    q.push(13);
    q.push(15);
    q.push(10);
    print(q);
    cout<<endl<<"Size of Queues is : "<<q.size()<<endl;
    cout<<"Front element : "<<q.front()<<endl;

    q.pop();
    q.pop();
    q.pop();
    print(q);
    cout<<endl<<"Size of Queues is : "<<q.size()<<endl;
    cout<<"Front element : "<<q.front()<<endl;

}