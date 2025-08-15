/*You are given a 'Head' of a sorted linked list. You can remove some values from the linked list.
In the end, you must return a sorted linked list thet contains no adjacent values that are equal.*/
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

Node* RemoveDuplicate(Node* &head){ //by me
    if(head == NULL) return NULL;
    Node* prev = head;
    Node* temp = head -> next;
    while(temp != NULL){
        if(prev -> data == temp -> data){
            prev -> next = temp -> next;
            temp -> next = NULL;
            delete temp;
            temp = prev -> next;
        }
        else{ 
            prev = temp;
            temp = temp -> next;
        }
    }
    return head;
}

int main(){
    Node* head = NULL;

    InsertAtHead(head, 18);
    InsertAtHead(head, 15);
    InsertAtHead(head, 15);
    InsertAtHead(head, 15);
    print(head);

    head = RemoveDuplicate(head);
    print(head);
}