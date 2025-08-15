// There are two ways to implement stack => 1) By using Array  2) By using Linked List
//1) Stack Using Array
#include<iostream>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;

    Stack(int size){ //constructor
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else cout << "Stack is Overflow." << endl;
    }

    void pop(){
        if(top >= 0) top--;
        else cout << "Stack is Empty." << endl;
    }

    int peak(){
        if(top >= 0) return arr[top];
        else {
            cout << "Stack is Empty." << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }
};

void printStack(Stack s){
    if(s.isEmpty()) return;
    int x = s.peak();
    s.pop();
    cout << x << "   ";
    printStack(s);
    s.push(x);
}

int main(){
    Stack st(5);

    st.push(22);
    st.push(24);
    st.push(20);
    st.push(15);
    st.push(12);
    cout << "Top : " << st.peak() << endl;
    st.push(10);

    cout<<endl<<"Display : ";
    printStack(st);

    st.pop();
    cout << endl << endl << "Top : " << st.peak()<<endl;

    st.pop();
    cout << "Top : " << st.peak()<<endl;

    if(st.isEmpty()) cout<<"Stack is empty." << endl;
    else cout<<"Stack is not empty." << endl;

    st.pop();
    st.pop();
    st.pop();
    st.pop();

    if(st.isEmpty()) cout<<"Stack is empty." << endl;
    else cout<<"Stack is not empty." << endl;
}
