/*Given a singly linked list, you have to detect the loop and remove the loop from the linked list, if present.
You have to make changes in the given linked list itself and return the updated linked list.*/
//Using Floyd's Clycle Detection Algorithm  //Better Approach
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

void InsertAtHead(Node* &head, Node* &tail, int d){ 
    if(head == NULL){ //For Empty List
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node *temp = new Node(d);
        temp -> next = head;
        head = temp;
    }
}

void print(Node* &head){ //for singly linked list
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

Node* FloydDetectLoop(Node* head){
    if(head == NULL) return NULL;
    Node* fast = head;
    Node* slow = head;

    while(fast != NULL && slow != NULL){
        fast = fast -> next;
        if(fast != NULL) fast = fast -> next;
        slow = slow -> next;
        if(fast == slow ){
//meaning => slow -> data is part of this loop this is the point where fast & slow intersect  //we don't know it's starting point
            //cout<<"Intersection : " << slow -> data << endl; 
            return slow;
        }
    }
    return NULL; 
}

Node* getStartingNode(Node *head){
    Node* intersection = FloydDetectLoop(head);
    if(head == NULL || intersection == NULL) return NULL;
    Node* slow = head;
    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

void RemoveLoop(Node* head){
    if(head == NULL) return;
    Node* start = getStartingNode(head);
    Node* temp = start;
    while(temp -> next != start) temp = temp -> next;
    temp -> next = NULL;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    InsertAtHead(head, tail, 30);
    InsertAtHead(head, tail, 25);
    InsertAtHead(head, tail, 20);
    InsertAtHead(head, tail, 16);
    InsertAtHead(head, tail, 15);
    InsertAtHead(head, tail, 12);
    print(head);
    
    tail -> next = head -> next -> next; //creating a loop //starting point is 16
//we can't print list now since it has loop
    cout<<"HEAD : "<< head -> data <<endl;
    cout<<"TAIL : "<< tail -> data <<endl;
    
    if(FloydDetectLoop(head) != NULL) cout<< "Loop is present." << endl;
    else cout<<"Loop is not present."<<endl;

    cout <<endl << "Loop starts at : " << getStartingNode(head) -> data << endl << endl;

    cout<<"Loop Removing : "<<endl;
    RemoveLoop(head);
    if(FloydDetectLoop(head) != NULL) cout<< "Loop is present." << endl << endl;
    else cout<<"Loop is not present."<<endl << endl;
    print(head);

}