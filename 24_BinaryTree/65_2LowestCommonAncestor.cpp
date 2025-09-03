/*Given a Binary Tree with all unique values & two nodes value n1 & n2. The task is to find the lowest common ancestor
of the given two nodes. We may assume that either both n1 & n2 are present in the tree or none of them are present.*/

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

node* LCA(node* root, int n1, int n2){
    if(root == NULL) return NULL;
    if(root -> data == n1 || root -> data == n2) return root;
    node* leftAns = LCA(root -> left, n1, n2);
    node* rightAns = LCA(root -> right, n1, n2);
    if(leftAns != NULL && rightAns != NULL)return root;
    else if(leftAns != NULL && rightAns == NULL)return leftAns;
    else if(leftAns == NULL && rightAns != NULL)return rightAns;
    else return NULL;
}

int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    /*input =>  
    1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    */
    cout << "Enter two node : "<< endl;
    int n1 , n2;
    cin >> n1 >> n2;
    cout<<"LCA : " <<LCA(root, n1, n2) -> data;
}