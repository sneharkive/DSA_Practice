//Check given Linked List is Palindrome or not
//Approach :- 1)Find Middle   2)Reverse LL after the middle
//            3)Compare both halves    4)Repeat 2nd step
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

Node* getMiddleLL(Node* head){
    if(head == NULL || head -> next == NULL) return head;
    Node* fast = head -> next;
    Node* slow = head;
    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}

Node* ReverseLinkedList(Node* &head){ //using loop
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
}

string Palindrome(Node* head){
    if(head == NULL || head -> next == NULL ) return "Palindrome";
    Node* mid = getMiddleLL(head); //find middle
    Node* temp = mid -> next;
    mid -> next = ReverseLinkedList(temp); //reverse list after middle
    //compare both side
    Node* head1 = head;
    Node* head2 = mid -> next;
    while(head2 != NULL){
        if(head1 -> data != head2 -> data) return "Not Palindrome";
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    //to undo the changes in the list 
    temp = mid -> next;
    mid -> next = ReverseLinkedList(temp); //repeat step two
    
    return "Palindrome";
}

int main(){
    Node* head = NULL;

    InsertAtHead(head, 3);
    InsertAtHead(head, 5);
    InsertAtHead(head, 6);
    InsertAtHead(head, 5);
    InsertAtHead(head, 3);
    print(head);
    cout<< "Answer : " << Palindrome(head)<<endl;
    print(head);

}

