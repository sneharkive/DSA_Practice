/*You are given a linked list of N nodes. Your task is to remove the duplicate nodes from the
linked list such that every element in the linked list occurs only once.
In case an element occurs more then  once, only keep it's first occurance in the list*/
//using 2 loops with time complexity = O(n^2)
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
    Node* before = prev;
    while(prev != NULL){
        while(temp != NULL){
            if(prev -> data == temp -> data){
                before -> next = temp -> next;
                temp -> next = NULL;
                delete temp;
                temp = before -> next;
            }
            else {
                before = temp;
                temp = temp -> next;
            }
        }
        prev = prev -> next;
        before = prev;
        if(prev != NULL) temp = prev -> next;
    }
    
    return head;
}

int main(){
    Node* head = NULL;

    InsertAtHead(head, 18);
    InsertAtHead(head, 12);
    InsertAtHead(head, 15);
    InsertAtHead(head, 10);
    InsertAtHead(head, 18);
    InsertAtHead(head, 15);
    InsertAtHead(head, 15);
    print(head);

    head = RemoveDuplicate(head);
    print(head);
}