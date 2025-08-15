/*Given a binary tree, find if it is height balanced or not. A tree is height balanced if 
difference heights of left and right subterres is not more than one for all nodes of tree.
So for balanced tree => height of left sub tree - height of right sub tree <= 1 for all nodes
BY ME ALSO BY SIR (optimised) */

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

pair<int, bool> Height(node* root){
    if(root == NULL) {
        pair<int, bool> p = make_pair(0, true);
        return p;
    }
    pair<int, bool> left = Height(root -> left);
    pair<int, bool> right = Height(root -> right);
    int leftHeight = left.first;
    int rightHeight = right.first;
    pair<int, bool> ans;
    ans.first = max (leftHeight, rightHeight) + 1;
    ans.second = (left.second && right.second);
    if(abs(leftHeight - rightHeight) <= 1) ans.second = (ans.second && true);
    else ans.second = (ans.second && false);
    return ans;
}

bool IsBalanced(node* root){
    return Height(root).second;
}

int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    //input =>  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << "Answer : " << IsBalanced(root);
}