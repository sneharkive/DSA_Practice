/*Given a binary tree, find if it is height balanced or not. A tree is height balanced if 
difference heights of left and right subterres is not more than one for all nodes of tree.
So for balanced tree => height of left sub tree - height of right sub tree <= 1 for all nodes
BY SIR Also not the optimise one*/

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

int Height(node* root){
    if(root == NULL) return 0;
    int left = Height(root -> left);
    int right = Height(root -> right);
    return max(left, right) + 1;
}

bool IsBalanced(node* root){
    if(root == NULL) return true;
    bool left = IsBalanced(root -> left);
    bool right = IsBalanced(root -> right);
    bool diff = abs(Height(root -> left) - Height(root -> right)) <= 1;
    if(left && right && diff) return true;
    else return false;
}

int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    //input =>  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << "Answer : " << IsBalanced(root);
}