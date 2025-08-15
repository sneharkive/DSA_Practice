/*You are given a linked list having N number of nodes & each node will have an integer 
which can be 0, 1 or 2. You have to sort the given linked list in ascending order*/
//If data replacement is not allowed
//Approach 2
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

void insertAtTail(Node* &tail, Node* curr){
    tail -> next = curr;
    tail = curr;
    return;
}

Node* SortList(Node* head){
    //if(head == NULL) return head;
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    Node* curr = head;
    while(curr != NULL){
        if(curr -> data == 0) insertAtTail(zeroTail, curr);
        else if(curr -> data == 1) insertAtTail(oneTail, curr);
        else if(curr -> data == 2) insertAtTail(twoTail, curr);
        curr = curr -> next;
    }
    if(oneHead -> next != NULL) zeroTail -> next = oneHead -> next;
    else zeroTail -> next = twoHead -> next;
    oneTail -> next = twoHead -> next;
    twoTail -> next =NULL;
    head = zeroHead -> next;

    //to delete dummy nodes
    zeroHead -> next = NULL;
    oneHead -> next = NULL;
    twoHead -> next = NULL;
    delete zeroHead;
    delete oneHead;
    delete twoHead;

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