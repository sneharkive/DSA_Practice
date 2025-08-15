//Split circular linked list into two circular linked list
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

int getLength(Node* head){
    Node* temp = head;
    int len = 1;
    while(temp -> next != head){
        len++;
        temp = temp -> next;
    }
    return len;
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

Node* SplitCLL(Node* &head){
    if(head == NULL || head -> next == head) return head;
    Node* temp = head;
    int len = getLength(head);
    for(int i = 1; i < len/2; i++) temp = temp -> next;
    Node* head2 = temp -> next;
    temp -> next = head;
    Node* temp2 = head2;
    while(temp2 -> next != head)temp2 = temp2 -> next;
    temp2 -> next = head2;
    return head2;
}

int main(){
    Node* head = NULL;
    InsertNode(head, 12 , 10);
    InsertNode(head, 10 , 18);
    InsertNode(head, 10 , 16);
    InsertNode(head, 10 , 12);
    InsertNode(head, 10 , 12);
    InsertNode(head, 10 , 16);
    InsertNode(head, 10 , 16);
    printscll(head);
    cout << endl << isCircular(head) << endl;
    int len = getLength(head);
    cout<<len<<endl;
    Node* head2 = SplitCLL(head);
    printscll(head); 
    printscll(head2);
    cout << endl << isCircular(head) << endl;
    cout << endl << isCircular(head2) << endl;
}