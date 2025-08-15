/*You are given a linked list of 'N' nodes and an integer 'k'. You have to reverse the
given linked list in groups of size k i.e if list contains x nodes numbered from 1 to x,
then you need to reverse each of the groups (1, k), (k+1, 2*k), and so on.
Ex:-  given linked list  [1,2,3,4,5,6] 
i/p => k = 2
o/p => [2,1,4,3,6,5]*/

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

Node* ReverseInkGroup(Node* &head, int k){
    if(head == NULL) return NULL;
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;
    while(curr != NULL && count < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count ++;
    }
    if(next != NULL) head -> next = ReverseInkGroup(next, k);
    return prev;
}
int main(){
    Node* head = NULL;
    InsertAtHead(head, 25);
    InsertAtHead(head, 20);
    InsertAtHead(head, 16);
    InsertAtHead(head, 15);
    InsertAtHead(head, 12);
    InsertAtHead(head, 8);
    InsertAtHead(head, 6);
    InsertAtHead(head, 4);
    InsertAtHead(head, 2);
    print(head);

    int k = 3;
    cout << endl << "After Reverse : " << endl;
    head = ReverseInkGroup(head, k);
    print(head);
}