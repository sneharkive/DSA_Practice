//Check given Linked List is Palindrome or not
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

int getLength(Node* head){
    int count = 0;
    while(head != NULL) {
        count ++;
        head = head -> next;
    }
    return count;
}

string Palindrome(Node* head){
    int len = getLength(head);
    int* arr = new int[len];\
    Node* temp = head;
    int i = 0;
    while(temp != NULL){
        arr[i] = temp -> data;
        temp = temp -> next;
        i++;
    }
    for(int s = 0, e = len - 1; s < e; s++, e--) if(arr[s] != arr[e]) return "Not Palindrome";
    return "Palindrome";
}

int main(){
    Node* head = NULL;

    InsertAtHead(head, 4);
    InsertAtHead(head, 5);
    InsertAtHead(head, 6);
    InsertAtHead(head, 5);
    InsertAtHead(head, 3);
    print(head);
    cout<< "Answer : " << Palindrome(head)<<endl;
}

