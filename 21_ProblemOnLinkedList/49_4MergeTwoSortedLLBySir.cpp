/*You are given two sorted linked lists. You have to merge them to produce a combined 
sorted linked list. You need to return the head of the final linked list.
Given Linked List may or may not be NULL.
Ex:  i/p =>  1 -> 4 -> 5 -> NULl  and  2 -> 3 -> 5 -> NULL
     o/p => 1 -> 2 -> 3 -> 4 -> 5 -> 5 -> NULL*/
//BY SIR
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

Node* solve(Node* &head1, Node* &head2){
//Here head1 -> data < head2 -> data 
    Node* prev1 = head1;
    Node* curr1 = head1 -> next;
    Node* prev2 = head2;
    Node* curr2 = prev2;
    while(curr1 != NULL && prev2 != NULL){
        if((prev2 -> data <= curr1 -> data) && (prev2 -> data >= prev1 -> data)){
            curr2 = prev2 -> next;
            prev2 -> next = prev1 -> next;
            prev1 -> next = prev2;
            prev1 = prev2;
            prev2 = curr2;
        }
        else {
            prev1 = curr1;
            curr1 = curr1 -> next;
        }
    }
    if(curr1 == NULL) prev1 -> next = prev2;
    return head1;
}

Node* MergeLL(Node* head1, Node* head2){
    if(head1 == NULL && head2 == NULL) return head2;
    else if(head1 == NULL && head2 != NULL) return head2;
    else if(head1 != NULL && head2 == NULL) return head1;
    else if (head1 -> data <= head2 -> data ) return solve(head1, head2);
    else if (head2 -> data <= head1 -> data ) return solve(head2, head1);
}

int main(){
    Node* head1 = NULL;
    Node* head2 = NULL;

    InsertAtHead(head1, 9);
    InsertAtHead(head1, 7);
    InsertAtHead(head1, 6);
    InsertAtHead(head1, 5);
    InsertAtHead(head1, 3);
    cout << "Linked List 1 : ";
    print(head1);

    InsertAtHead(head2, 5);
    InsertAtHead(head2, 4);
    InsertAtHead(head2, 3);
    cout << "Linked List 2 : ";
    print(head2);
    
    head1 = MergeLL(head1, head2);
    print(head1);
}