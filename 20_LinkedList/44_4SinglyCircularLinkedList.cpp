#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){ //constructor
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){ //destructor
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void InsertNode(Node* &tail, int element, int data){
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

void DeleteNode(Node* &tail, int element){
    if (tail == NULL) cout << "The List is empty! Check again." << endl ;
    else{ //non empty list  //assuming element is present in the list
        Node* prev = tail;
        Node* curr = prev -> next;
        while(curr -> data != element) {
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        if (curr == prev) tail = NULL; //for single node list 
        else if (curr == tail) tail = prev;
        curr -> next = NULL;
        delete curr;
    }
}

void print (Node* tail){
    Node* temp = tail;
    if (tail == NULL) cout << "List is empty." << endl; 
    else {
        do{
        cout << temp -> data << "  ";
        temp = temp -> next;
    }while(temp != tail);
    cout << endl ;
    }
}

int main(){
    //Node* node1 = new Node(12);
    Node* tail = NULL;
    //print(tail);
    InsertNode(tail, 12 , 10);
    /*InsertNode(tail, 10 , 18);
    InsertNode(tail, 10 , 16);
    InsertNode(tail, 10 , 12);
    print(tail);
    InsertNode(tail, 12 , 20);*/
    print(tail);

    DeleteNode(tail, 10);
    print(tail);
    cout << "TAIL : " << tail -> data << endl;
}