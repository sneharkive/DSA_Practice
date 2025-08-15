/*Design a data structure, which represents two stacks using only one array common 
for both stacks. The data structure should support the following operations : 
push1(NUM) - Push 'NUM' into stack1.
push2(NUM) - Push 'NUM' into stack2.
pop1() - Pop out a top element from stack1 and return popped element, in case of underflow return -1
pop2() - Pop out a top element from stack2 and return popped element, in case of underflow return -1*/
//Approach : push at stack1 will be left to right and push at stack2 will be right to left

#include<iostream>
using namespace std;
class TwoStack {
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    TwoStack(int s){
        this -> size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    void push1(int num1){
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num1;
        }
        else cout << "Stack is Overflow." << endl;
    }
    void push2(int element){
        if(top1 < top2){
            top2++;
            arr[top2] = element;
        }
        else cout << "Stack is Overflow." << endl;
    }

    int pop1(){
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        } 
        else return -1;
    }
    int pop2(){
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        } 
        else return -1;
    }
};
