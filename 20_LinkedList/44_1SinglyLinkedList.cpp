#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){ //constructor
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){ //destructor
        int value = this -> data;

        //i don't understand the requirement of this whole "if" statement
        if(this-> next != NULL){ //Memory Free
            delete next;
            this -> next = NULL;
        }

        cout<<"Memory is free for node with data " <<value<<endl;
    }
};

//insert at start
void InsertAtHead(Node* &head, Node* &tail, int d){ //here we take reference("&head") because we don't want to make any copy we want to change directly in the real linked list
    if(head == NULL){ //For Empty List
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node *temp = new Node(d);//whenever we give i/p we need to store it so 1st we need to create a node to save the given i/p
        temp -> next = head;
        head = temp;
    }
    
}

//insert at end 
void InsertAtTail(Node* &head, Node* &tail, int d){
    if(tail == NULL){ //For Empty List
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node *temp = new Node(d);
        tail -> next = temp;
        tail = tail -> next;
    }
}

//insert at specific position
void InsertAtPosition(Node* &head, Node* &tail, int d, int pos){
    if(pos == 1) {
        InsertAtHead(head, tail, d);
        return;
    } //we need to call "InsertAtHead" because in for i start from "1"
    Node *temp = new Node(d);
    Node* t = head;
    for(int i = 1; i < pos-1; i++) t = t -> next;
    if(t -> next == NULL){
        InsertAtTail(head, tail, d);
        return;
    }//we need to call "InsertAtTail" because if we add a node at the end through "InsertAtPosition" then "tail" will not update
    //and we need to update tail every time we add a node at the end
    
    temp -> next = t -> next;
    t -> next = temp;
}

void deleteNode(Node* &head, Node* &tail, int position){
    if(position == 1){ //deleting first or start node
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{//deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;
        for(int i = 1; i < position; i++){
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        if (prev -> next == NULL) tail = prev;
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data <<"  ";
        temp = temp -> next; 
    }
    cout<<endl;
}
int main(){
    Node* node1 = new Node(11); //create a new node

    Node* head = node1; //head pointed to node1
    Node* tail = node1; //for single node head & tail is same

    /*Node* head = NULL;  //for empty list
      Node* tail = NULL;  //for empty list*/
    print(head);

    InsertAtHead(head, tail, 9);
    InsertAtHead(head, tail, 5);
    print(head);


    InsertAtTail(head, tail, 12);
    InsertAtTail(head, tail, 15);
    InsertAtTail(head, tail, 18);
    print(head);


    InsertAtPosition(head, tail, 10, 3);
    print(head);
    InsertAtPosition(head, tail, 3, 1);
    print(head);
    InsertAtPosition(head, tail, 23, 9);
    print(head);

    cout<<"HEAD : "<< head -> data <<endl;
    cout<<"TAIL : "<< tail -> data <<endl;

    deleteNode(head, tail, 5);
    print(head);

    cout<<"HEAD : "<< head -> data <<endl;
    cout<<"TAIL : "<< tail -> data <<endl;

    deleteNode(head, tail, 8);
    print(head);

    cout<<"HEAD : "<< head -> data <<endl;
    cout<<"TAIL : "<< tail -> data <<endl;

    deleteNode(head, tail, 1);
    print(head);

    cout<<"HEAD : "<< head -> data <<endl;
    cout<<"TAIL : "<< tail -> data <<endl;

}