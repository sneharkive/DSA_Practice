/*Given a singly linked list, you have to detect the loop and remove the loop from the linked list, if present.
You have to make changes in the given linked list itself and return the updated linked list.*/
//Using Map
#include <iostream>
#include<map>
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

void printsll(Node* &head){ //for singly linked list
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

bool DetectLoop(Node* head){
    if(head == NULL) return false;
    map<Node*, bool> visited;
    Node* temp = head;
    while(temp != NULL){
        if(visited[temp] == true){
            cout << "Starting point of the loop is at : " << temp -> data <<endl;
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

int main(){
    Node* heads = NULL;
    Node* tail = NULL;

    InsertAtHead(heads, tail, 25);
    InsertAtHead(heads, tail, 20);
    InsertAtHead(heads, tail, 16);
    InsertAtHead(heads, tail, 15);
    InsertAtHead(heads, tail, 12);
    printsll(heads);
    
    tail -> next = heads -> next -> next; //creating a loop

    cout<<"HEAD : "<< heads -> data <<endl;
    cout<<"TAIL : "<< tail -> data <<endl;
    
    if(DetectLoop(heads)) cout<< "Loop is present." << endl;
    else cout<<"Loop is not present."<<endl;
}