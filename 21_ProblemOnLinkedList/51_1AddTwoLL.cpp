//need to add two linked list and store it to another linked list
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

Node* Sum(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    temp1 = ReverseLinkedList(head1);
    temp2 = ReverseLinkedList(head2);
    Node* ans = NULL;
    int digit = 0, carry = 0;
    while(temp1 != NULL || temp2 != NULL || carry != 0){
        int val1 = 0, val2 =0;
        if(temp1 != NULL) val1 = temp1 -> data;
        if(temp2 != NULL) val2 = temp2 -> data;

        int sum = carry + val1 + val2;
        digit = sum % 10;
        InsertAtHead(ans, digit);
        carry = sum / 10;

        if(temp1 != NULL) temp1 = temp1 -> next;
        if(temp2 != NULL) temp2 = temp2 -> next;
    }

    return ans;
}

int main(){
    Node* head1 = NULL;
    Node* head2 = NULL;
    
    InsertAtHead(head1, 8);
    InsertAtHead(head1, 5);
    //InsertAtHead(head1, 6);
    //InsertAtHead(head1, 2);

    print(head1);

    InsertAtHead(head2, 6);
    InsertAtHead(head2, 7);
    print(head2);

    Node* ans = Sum(head1, head2);
    print(ans);

}