//Reverse Singly Linked List
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

/*Node* ReverseLinkedList(Node* &head){ //using loop
    if(head == NULL || head -> next == NULL) return head;
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while (curr != NULL){ //using loop
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}*/

void Reverse(Node* &head, Node* curr, Node* prev){ 
    if(curr == NULL){
        head = prev;
        return;
    }
    Reverse(head, curr -> next, curr);
    curr -> next = prev;
}

Node* ReverseLinkedList(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Reverse(head, curr, prev);
    return head;
}

int main(){
    Node* head = NULL;
    InsertAtHead(head, 20);
    InsertAtHead(head, 16);
    InsertAtHead(head, 15);
    InsertAtHead(head, 12);
    InsertAtHead(head, 10);
    print(head);

    head = ReverseLinkedList(head);
    print (head);
}