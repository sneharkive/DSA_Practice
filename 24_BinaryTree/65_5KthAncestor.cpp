/*Given a binary tree of size N, a node and a positive integer k. Your task is to complete the function kthAncestor(), thr function
should return the kth ancestor of the given node in the binary tree. If there does not exist any such ancestor then return -1*/
//By SIR

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

node* Solve(node* root, int &k, int node){
    if(root == NULL) return NULL;
    if(root -> data == node) return root;
    node* leftAns = Solve(root -> left, k, node);
    node* rightAns = Solve(root -> right, k, node);
    if(leftAns != NULL && rightAns == NULL){
        k--;
        if(k <= 0){
            k = INT16_MAX;
            return root; 
        }
        return leftAns;
    }
    if(leftAns == NULL && rightAns != NULL){
        k--;
        if(k <= 0){
            k = INT16_MAX;
            return root; 
        }
        return rightAns;
    }
    return NULL;
}

int KthAncestor(node* root, int k, int node){
    node* ans = Solve(root, k, node) ;
    if(ans == NULL || ans -> data == node) return -1;
    else return ans -> data;
}

int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    /*input =>  
    1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    */
    int k, node;
    cout << "Enter the node : ";
    cin >> node;
    cout << "Enter K : " ;
    cin >> k;
    cout << endl << "Kth Ancestor : " << KthAncestor(root, k, node);
}