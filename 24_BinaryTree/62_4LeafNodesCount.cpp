/*You are given a Binary tree. You have to count and return the number of leaf nodes present in it.
A binary tree is a tree data structure in which each node has at most two children, which are reffered 
to as left & right child. A node is a leaf node if both left & right child nodes of it are NULL.
Approach : All I need to do traverse the whole tree and find leaf node. Here we can use any traverse 
method (like :- Level, In, Pre, Post order) use any one of them.*/

#include<iostream>
#include<queue>
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

void InOrder(node* root, int &count){
    if(root == NULL)return; //base case
    InOrder(root -> left, count);
    if(root -> left == NULL && root -> right == NULL) count++;
    InOrder(root -> right, count);
}

int CountLeafNode(node* root){
    int count = 0;
    InOrder(root, count);
    return count;
}

int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    //input =>  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<< "Answer : " << CountLeafNode(root);
}