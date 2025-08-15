/*Given the head node of the singly linked list, 
return a pointer pointing to the middle of the linked list
If there are an odd number of elements, return the middle element if 
there are even elements return the one which is farther from the head node.*/
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

int getLength(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

int MiddleOfLL(Node* head){
    int len = getLength(head);
    Node* temp = head;
    for(int i = 0; i < len/2; i++) temp = temp -> next;
    return temp -> data;
}
int main(){
    Node* head = NULL;
    InsertAtHead(head, 20);
    InsertAtHead(head, 16);
    InsertAtHead(head, 15);
    InsertAtHead(head, 12);
    InsertAtHead(head, 10);
    print(head);

    cout<<"The Middle of Linked List is : " << MiddleOfLL(head) << endl;

}