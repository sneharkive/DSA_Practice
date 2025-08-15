/*You are given two sorted linked lists. You have to merge them to produce a combined 
sorted linked list. You need to return the head of the final linked list.
Given Linked List may or may not be NULL.
Ex:  i/p =>  1 -> 4 -> 5 -> NULl  and  2 -> 3 -> 5 -> NULL
     o/p => 1 -> 2 -> 3 -> 4 -> 5 -> 5 -> NULL*/
//BY ME
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
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

void InsertAtHead(Node* &head, int d){ 
    if(head == NULL){ //For Empty List
        Node* temp = new Node(d);
        head = temp;
    }
    else{
        Node *temp = new Node(d);
        temp -> next = head;
        head = temp;
    }
}

void print(Node* &head){ 
    cout<<"Singly Linked List : " <<endl;
    if(head == NULL){
        cout << "List is Empty." << endl;
        return;
    }
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data <<"  ";
        temp = temp -> next; 
    }cout<<endl<<endl;
}

void insertAtTail(Node* &tail, Node* &curr){
    tail -> next = curr;
    tail = curr;
    curr = curr -> next;
    return;
}

Node* MergeLL(Node* head1, Node* head2){
    if(head1 == NULL && head2 == NULL) return head2;
    else if(head1 == NULL && head2 != NULL) return head2;
    else if(head1 != NULL && head2 == NULL) return head1;
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* head = new Node(-1);
    Node* tail = head;
    while(temp1 != NULL && temp2 != NULL){
        if(temp1 -> data <= temp2 -> data) insertAtTail(tail, temp1);
        else if(temp1 -> data > temp2 -> data) insertAtTail(tail, temp2);
    }
    if(temp1 == NULL) insertAtTail(tail, temp2);
    else insertAtTail(tail, temp1);
    head1 = head -> next;
    head -> next = NULL;
    delete head;
    return head1;
}

int main(){
    Node* head1 = NULL;
    Node* head2 = NULL;

    //InsertAtHead(head1, 9);
    //InsertAtHead(head1, 5);
    InsertAtHead(head1, 1);
    cout << "Linked List 1 : ";
    print(head1);

    /*InsertAtHead(head2, 7);
    InsertAtHead(head2, 6);
    InsertAtHead(head2, 5);
    InsertAtHead(head2, 3);*/
    InsertAtHead(head2, 2);
    cout << "Linked List 2 : ";
    print(head2);
    
    head1 = MergeLL(head1, head2);
    print(head1);
}