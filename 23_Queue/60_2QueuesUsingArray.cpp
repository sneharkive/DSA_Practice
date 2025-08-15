#include<iostream>
using namespace std;

class Queue{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        this -> size = size;
        arr = new int [size];
        front = 0;
        rear = 0;
    }

    bool isEmpty(){
        if(front == rear)return true;
        else return false;
    }

    void enqueue(int data){
        if(rear == size)cout << "Queue is full." <<endl;
        else{
            arr[rear] = data;
            rear++;
        }
    }

    void dequeue(){
        if(front == rear) cout<<"Queue is empty."<<endl;
        else{
            arr[front] = -1;
            front++; 
            if(front == rear){
                front = 0;
                rear = 0;
            }
        }
    }

    int FrontElement(){
        if(front == rear) return -1; //empty Queue
        else return arr[front];
    }

    void printQueue(){
        if(isEmpty()) cout<<"Queue is empty.";
        else{
            for(int i = front; i < rear; i++)
                cout<<arr[i]<<"  ";
                cout<<endl;
        }
    }
};

int main(){
    Queue q(5);
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
    q.enqueue(10); //can't insert although queue has some place since we just did "dequeue" operation
    q.printQueue();
    cout<<endl<<"Front element : "<<q.FrontElement()<<endl;


}