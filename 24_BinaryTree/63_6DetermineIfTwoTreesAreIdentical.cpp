/*Given two binary trees, the task is to find if both of them are identical or not.*/

//Run it at GeeksFroGeekS i also solve it there in my way

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

bool Identical(node* root1, node* root2){
    if(root1 == NULL && root2 == NULL) return true;
    else if((root1 == NULL && root2 != NULL) || (root1 != NULL && root2 == NULL)) return false;
    bool left = Identical(root1 -> left, root2 -> left);
    bool right = Identical(root1 -> right, root2 -> right);
    bool value = root1 -> data == root2 -> data;
    if(left && right && value) return true;
    else return false;
}


int main(){
    node* root1 = NULL;
    root1 = BuildTree(root1);
    node* root2 = NULL;
    root2 = BuildTree(root2);
    //input =>  1 3 7 - 1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<< Identical(root1, root2);
}