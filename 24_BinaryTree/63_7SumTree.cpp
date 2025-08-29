/*Given a Binary Tree. Return true if, for evry node X in the tree other than the leaves, 
its value is equal to the sum of its left subtree's value and its right subtree.s value. Else return false.
An empty tree is also a Sum Tree as the sum of an empty tree can be considered to be 0. A leaf node is also considered a Sum Tree.*/

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

pair<int, bool> Solve(node* root){
    if(root==NULL){
        pair<int, bool>p = make_pair(0, true);
        return p;
    }
    if(root -> left == NULL && root -> right == NULL) {
        pair<int, bool>p = make_pair(root -> data, true);
        return p;
    }
    pair<int, bool> left = Solve(root -> left);
    pair<int, bool> right = Solve(root -> right);
    bool condition = root -> data == left.first + right.first;

    pair<int, bool> ans;
    if(left.second && right.second && condition) {
        ans.first = 2*root -> data;
        ans.second = true;
    }
    else ans.second = false;
    return ans;
}

bool isSumTree(node* root){
    return Solve(root).second;
}

int main(){
    node* root = NULL;
    root = BuildTree(root);;
    //input =>  1 3 7 - 1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Answer : " << isSumTree(root);
}