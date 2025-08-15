/*You are given a linked list having N number of nodes & each node will have an integer 
which can be 0, 1 or 2. You have to sort the given linked list in ascending order*/
//Approach 1
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

Node* SortList(Node* head){
    if(head == NULL) return head;
    int zerocount = 0, onecount = 0, twocount = 0;
    Node* temp = head;
    while(temp != NULL){
        if(temp -> data == 0) zerocount++;
        else if(temp -> data == 1) onecount++;
        else if(temp -> data == 2) twocount++;
        temp = temp -> next;
    }
    temp = head;
    while(temp != NULL){
        if(zerocount != 0){
            temp -> data = 0;
            zerocount--;
        }
        else if(onecount != 0){
            temp -> data = 1;
            onecount--;
        }
        else if(twocount != 0){
            temp -> data = 2;
            twocount--;
        }
        temp = temp -> next;
    }
    return head;
}

int main(){
    Node* head = NULL;

    InsertAtHead(head, 1);
    InsertAtHead(head, 2);
    InsertAtHead(head, 0);
    InsertAtHead(head, 2);
    InsertAtHead(head, 2);
    InsertAtHead(head, 1);
    print(head);
    head = SortList(head);
    print(head);
}