//Last In First Out
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Sneha");
    s.push("Roy");
    s.push("Hange");
    s.push("Bread");
    cout<<"Top element : "<<s.top()<<endl;
    s.pop();
    cout<<"After POP  Top element : "<<s.top()<<endl;
    cout<<"Size : "<<s.size()<<endl;
    cout<<"Empty or not : "<<s.empty()<<endl;
}