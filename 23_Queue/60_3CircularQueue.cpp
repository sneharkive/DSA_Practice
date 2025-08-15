#include<iostream>
using namespace std;

class CircularQueue{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    CircularQueue(int size){
        this -> size = size;
        arr = new int [size];
        front = rear = -1;
    }

    bool isEmpty(){
        if(front == -1 && rear == -1)return true;
        else return false;
    }

    void enqueue(int data){
        if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
            cout<< "Queue is Full." <<endl;
            return;
        }
        else if(front == -1) front = rear = 0; //first element to push
        else if(front != 0 && rear == size - 1) rear = 0;
        else rear++;
        arr[rear] = data;
    }

    void dequeue(){
        if(isEmpty()) {
            cout<<"Queue is empty."<<endl;
            return;
        }
        arr[front] = -1;
        if(front == rear) front = rear = -1; //single element
        else if(front == size - 1) front = 0;
        else front ++;
    }

    int FrontElement(){
        if(isEmpty()) return -1; //empty Queue
        else return arr[front];
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
    CircularQueue q(5);

    q.enqueue(2);
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(13);
    q.enqueue(15);
    q.printQueue();
    cout<<endl<<"Front element : "<<q.FrontElement()<<endl;
    q.enqueue(10);

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.printQueue();

    q.enqueue(10); //we can insert element so it is better than normal queue
    q.enqueue(20);

    q.printQueue();
    cout<<endl<<"Front element : "<<q.FrontElement()<<endl;

}