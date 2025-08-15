//Reverse Singly Linked List 2nd approach
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){ //Constructor
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node(){ //Destructor
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void InsertAtHead(Node* &head, int d){ //here we take reference("&head") because we don't want to make any copy we want to change directly in the real linked list
    if(head == NULL){ //For Empty List
        Node* temp = new Node(d);
        head = temp;
    }
    else{
        Node *temp = new Node(d);//whenever we give i/p we need to store it so 1st we need to create a node to save the given i/p
        temp -> next = head;
        head = temp;
    }
}

void print(Node* &head){
    if(head == NULL){
        cout << "List is Empty." << endl;
        return;
    }
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data <<"  ";
        temp = temp -> next; 
    }cout<<endl;
}

Node* Reverse(Node* &head){ 
    if(head == NULL || head -> next == NULL) return head;
    Node* chotaHead = Reverse(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    return chotaHead;
}

int main(){
    Node* head = NULL;
    InsertAtHead(head, 20);
    InsertAtHead(head, 16);
    InsertAtHead(head, 15);
    InsertAtHead(head, 12);
    InsertAtHead(head, 10);
    print(head);

    head = Reverse(head);
    print (head);
}