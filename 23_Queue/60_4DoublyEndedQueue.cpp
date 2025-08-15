#include<iostream>
using namespace std;

class DoubleEndedQueue{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    DoubleEndedQueue(int size){
        this -> size = size;
        arr = new int [size];
        front = rear = -1;
    }

    bool isEmpty(){
        if(front == -1 && rear == -1)return true;
        else return false;
    }

    void PushFront(int data){
        if((front == 0 && rear == size-1) || (front != 0 && rear == (front-1)%(size-1))) cout<<"Queue is Full." <<endl;
        else if(front == -1 && rear == -1) front = rear = 0;
        else if(front == 0 && rear != size - 1) front = size - 1;
        else front--; 
        arr[front] = data;
    }

    void PushBack(int data){
        if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))) cout<<"Queue is Full." <<endl;
        else if(front == -1 && rear == -1) front = rear = 0;
        else if(front != 0 && rear == size - 1) rear = 0;
        else rear++;; 
        arr[rear] = data;
    }

    void PopFront(){
        if(isEmpty()) {
            cout<<"Queue is empty."<<endl;
            return;
        }
        arr[front] = -1;
        if(front == rear) front = rear = -1; //single element
        else if(front == size - 1) front = 0;
        else front ++;
    }

    void PopBack(){
        if(isEmpty()) {
            cout<<"Queue is empty."<<endl;
            return;
        }
        arr[rear] = -1;
        if(front == rear) front = rear = -1; //single element
        else if(rear == 0) rear = size - 1;
        else rear--;
    }

    void printQueue(){
        if(isEmpty()) cout<<"Queue is empty."<<endl;
        else if(rear >= front){
            for(int i = front; i <= rear; i++)
                cout<<arr[i]<<"  ";
                cout<<endl;
        }
        else if (rear < front){
            for(int i = front; i < size; i++) cout<<arr[i]<<"  ";
            for(int i = 0; i <= rear; i++) cout<<arr[i]<<"  ";
            cout<<endl;
        }

    }
};

int main(){
    DoubleEndedQueue q(6);
    q.PushFront(10);
    q.PushFront(12);

    q.PushBack(5);
    q.PushBack(8);
    q.PushBack(18);
    q.PushBack(2);
    q.PushBack(15);
    q.printQueue();

    q.PopFront();
    q.PushFront(12);
    q.printQueue();

    q.PopBack();
    q.PopBack();
    q.printQueue();

}
