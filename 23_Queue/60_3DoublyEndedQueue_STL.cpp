#include<iostream>
#include<queue>
using namespace std;

int main(){
    deque<int>q;
    q.push_front(3);
    q.push_back(2);
    q.push_back(5);
    q.push_back(7);
    //q.push_front(15);
    //q.push_front(10);
    for(int num : q) cout<<num<<" ";

    cout<<endl<<"Size of Queues is : "<<q.size()<<endl;
    cout<<"Front element : "<<q.front()<<endl;

    q.pop_back();
    q.pop_front();
    for(int num : q) cout<<num<<" ";

    cout<<endl<<"Size of Queues is : "<<q.size()<<endl;
    cout<<"Front element : "<<q.front()<<endl;

}