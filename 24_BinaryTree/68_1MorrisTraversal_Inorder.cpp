/*Using Morris Traversal, we can traverse the tree without using stack and recursion. 
Here we print it as "Inorder" By changing of the position of print statement we can print it as "Preorder & Postorde".
Algoritham :- 
1)Initialize current as root
2)While current is not NULL
        if the cuurent does not have left child 
            a) print current's data
            b) go to the right, i.e., current = current -> right
        else  Find rightmost node in current left subtree OR node whoes right chil == current
            if we found right child == current
                a) update the right child as NULL of the node whose right child is currrent
                b) print current's data
                c) go to thr ight i.e. current = current -> right
            else 
                a) make current as the right child of the rightmost node we fount and 
                b) Go to this left child i.e. current = current -> left*/

#include<iostream>
using namespace std;

class node{
    public :
        int data;
        node* left;
        node* right;
    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* BuildTree(node* root){
    cout<< "Enter the data : " << endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1) return NULL;
    cout<< "Enter data for inserting in left of " << data <<": " <<endl;
    root -> left = BuildTree(root->left);
    cout<< "Enter data for inserting in right of " << data <<": " <<endl;
    root -> right = BuildTree(root->right);
    return root;
}

void MorrisTraversal(node* root){
    node *current, *pre;
    if(root == NULL) return;
    current = root;
    while(current != NULL){
        if(current -> left == NULL){
            cout << current -> data << "  ";
            current = current -> right;
        }
        else{ //find the inorder predecssor(pre) of current
            pre = current -> left;
            while(pre -> right != NULL && pre -> right != current) pre = pre -> right;
            if(pre -> right == NULL){
                pre -> right = current;
                current = current -> left;
            }
//Revert the changes made in the 'if' part to resotre the original tree i.e., fix the right child of predecessor
            else{
                pre -> right = NULL;
                cout << current -> data << "  ";
                current= current -> right;
            }
        }
    }
}