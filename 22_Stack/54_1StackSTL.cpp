/*Stack => LIFO (Last In First Out)
push => insert     pop => remove/delete     peak => point at top element
By using STL :  creation =>  stack <int> s;
                push     =>  s.push(2);
                pop      =>  s.pop();
                top      =>  s.top(); 
                isEmpty  =>  s.empty();
                size     =>  s.size();*/
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s; //creation of stack
    s.push(2); //push operation
    s.push(4);
    s.push(6);

    cout<<"Top Most Element : " << s.top() << endl;
    cout<<"Size : " <<s.size() << endl << endl;
    s.pop(); //top most element will be deleted

    cout<<"Top Most Element : " << s.top() << endl;
    cout<<"Size : " <<s.size() << endl << endl;

    if(s.empty()) cout<<"Stack is empty." << endl;
    else cout<<"Stack is not empty." << endl;
}
