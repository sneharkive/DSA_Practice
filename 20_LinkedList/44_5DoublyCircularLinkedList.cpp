#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){ //Constructor
        this -> data = data;
        this -> prev = NULL;
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

void InsertNode(Node* &tail, int data, int element){
    if(tail == NULL){ //empty list
        Node* temp = new Node(data);
        tail = temp;
        temp -> next = temp;
        temp -> prev = temp;
    }
    else{ //Non Empty List  //assuming "element" exist in the list
        Node* t = tail;
        while(t -> data != element) t = t -> next;
        Node* temp = new Node(data);
        temp -> next = t -> next;
        t -> next -> prev = temp;
        t -> next = temp;
        temp -> prev = t;
    }
}

void DeleteNode(Node* &tail, int element){
    if (tail == NULL) cout << "The List is empty! Check again." << endl ;
    else{ //non empty list  //assuming element is present in the list
        Node* bcurr = tail;
        Node* curr = bcurr -> next;
        while(curr -> data != element) {
            bcurr = curr;
            curr = curr -> next;
        }
        bcurr -> next = curr -> next;
        curr -> next -> prev = bcurr;
        if (curr == bcurr) tail = NULL; //for single node list 
        else if (curr == tail) tail = bcurr;
        curr -> next = NULL;
        curr -> prev = NULL;
        delete curr;
    }
}

void print(Node* tail){
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
    Node* tail = NULL;
    InsertNode(tail, 10, 12);
    /*InsertNode(tail, 18, 10);
    InsertNode(tail, 16, 10);
    InsertNode(tail, 12, 10);
    print(tail);

    InsertNode(tail, 20, 12);*/
    print(tail);

    DeleteNode(tail, 10);
    print(tail);

    cout << "TAIL : " <<tail -> data << endl;

}