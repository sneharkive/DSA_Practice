#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){ //constructor
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node(){ //destructor
        int value = this -> data;
        //i don't understand the requirement of this whole if statement
       if(this-> next != NULL){ //Memory Free
            delete next;
            this -> next = NULL;
        }
        cout<<"Memory is free for node with data " <<value<<endl;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << "  ";
        temp = temp -> next;
    } cout<<endl;
}
int getLength(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void InsertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){ //Empty List
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        temp -> next = head;
        head -> prev = temp; 
        head = temp;
    }
}

void InsertAtTail(Node* &head, Node* &tail, int data){
    if(tail == NULL){ 
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

void InsertAtPosition(Node* &head, Node* &tail, int data, int pos){
    if(pos == 1){
        InsertAtHead(head, tail, data);
        return;
    }
    Node* t = head;
    for(int i = 1; i < pos - 1; i++) t = t -> next;
    if (t -> next == NULL){
        InsertAtTail(head, tail, data);
        return;
    }
    Node* temp = new Node(data);
    temp -> prev = t;
    temp -> next = t -> next;
    t -> next = temp;
    temp -> next -> prev = temp;
}

void DeleteNode(Node* &head, Node* &tail, int position){
    Node* temp = head;
    if(position == 1){ //deleting first or start node
        head = head -> next;
        head -> prev = NULL;
        temp -> next = NULL;
        delete temp;
    }
    else{
        for(int i = 1; i < position - 1; i++) temp = temp -> next;
        Node* d = temp -> next;
        if(d -> next == NULL) {
            temp -> next = NULL;
            tail = temp;
        }
        else{
            temp -> next = temp -> next -> next;
            temp -> next -> prev = temp;
        }
        d -> next = NULL;
        d -> prev = NULL;
        delete d;
    }
}

int main(){
    /*Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;*/

    Node* head = NULL; //empty list
    Node* tail = NULL; //empty list

    //print(head);

    InsertAtHead(head, tail, 12);
    InsertAtHead(head, tail, 15);
    InsertAtHead(head, tail, 18);
    /*print(head);

    cout << "HEAD : " << head -> data << endl;
    cout << "TAIL : " << tail -> data << endl;*/

    InsertAtTail(head, tail, 20);
    InsertAtTail(head, tail, 25);
    InsertAtTail(head, tail, 30);
    print(head);

    cout << "HEAD : " << head -> data << endl;
    cout << "TAIL : " << tail -> data << endl;

    InsertAtPosition(head, tail, 300, 3);
    //print(head);

    InsertAtPosition(head, tail, 100, 1);
    //print(head);

    //cout<<getLength(head)<<endl;

    InsertAtPosition(head, tail, 500, 9);
    print(head);

    cout << "HEAD : " << head -> data << endl;
    cout << "TAIL : " << tail -> data << endl;

    cout<<endl<<"DELETE : "<<endl;
    DeleteNode(head, tail, 9); //Last
    print(head);
    cout << "HEAD : " << head -> data << endl;
    cout << "TAIL : " << tail -> data << endl;

    DeleteNode(head, tail, 1); //First
    print(head);
    cout << "HEAD : " << head -> data << endl;
    cout << "TAIL : " << tail -> data << endl;

    DeleteNode(head, tail, 4); //Mid
    print(head);
    cout << "HEAD : " << head -> data << endl;
    cout << "TAIL : " << tail -> data << endl;

}