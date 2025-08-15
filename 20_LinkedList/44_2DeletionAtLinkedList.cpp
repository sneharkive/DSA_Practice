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

        //i don't understand the requirement of this whole if statement
        if(this-> next != NULL){ //Memory Free
            delete next;
            this -> next = NULL;
        }
        
        cout<<"Memory is free for node with data " <<value<<endl;
    }
};

void InsertAtHead(Node* &head, int d){ 
    Node *temp = new Node(d);
    temp -> next = head;
    head = temp;
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
    Node* node1 = new Node(10); //create a new node

    Node* head = node1; 
    Node* tail = node1;

    InsertAtHead(head, 9);
    InsertAtHead(head, 5);
    InsertAtHead(head, 3);
    InsertAtHead(head, 1);
    print(head);

    deleteNode(head, tail, 2);
    print(head);

    cout<<"HEAD : "<< head -> data <<endl;
    cout<<"TAIL : "<< tail -> data <<endl;

}