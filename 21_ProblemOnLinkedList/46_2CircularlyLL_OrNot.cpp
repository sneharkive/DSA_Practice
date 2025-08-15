/*You are given the head of a linked list containing integers. 
You need to find out whether the given linked list is circular or not.*/
//empty list will also be consider as circular.
//All integer in the list is unique.
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

void InsertAtHead(Node* &head, int d){ //for singly linked list 
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

void printsll(Node* &head){ //for singly linked list
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

void InsertNode(Node* &tail, int element, int data){ //for singly circular linked list
    if(tail == NULL){ //empty list
        Node* temp = new Node(data);
        tail = temp;
        temp -> next = temp;
    }
    else{ //Non Empty List  //assuming "element" exist in the list
        Node* t = tail;
        while(t -> data != element) t = t -> next;
        Node* temp = new Node(data);
        temp -> next = t -> next;
        t -> next = temp;
    }
}

void printscll (Node* tail){ //for singly circular linked list
    cout<<"Singly Circular Linked List : " <<endl;
    Node* temp = tail;
    if (tail == NULL) cout << "List is empty." << endl; 
    else {
        do{
        cout << temp -> data << "  ";
        temp = temp -> next;
    }while(temp != tail);
    cout << endl << endl ;
    }
}

string isCircular(Node* head){
    if(head == NULL) return "Circular LL";
    else {
        Node* temp = head -> next;
        while(head != temp){
            if(temp == NULL) return "Not Circular LL";
            temp = temp -> next;
        }
        return "Circular LL";
    }
}

int main(){
    Node* heads = NULL;
    InsertAtHead(heads, 25);
    InsertAtHead(heads, 20);
    InsertAtHead(heads, 16);
    InsertAtHead(heads, 15);
    InsertAtHead(heads, 12);
    printsll(heads);

    Node* headc = NULL;
    InsertNode(headc, 12 , 10);
    InsertNode(headc, 10 , 18);
    InsertNode(headc, 10 , 16);
    InsertNode(headc, 10 , 12);
    printscll(headc);

    cout << endl << isCircular(heads) << endl;

    cout << endl << isCircular(headc) << endl;
    
}