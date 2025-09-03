/*Given a Binary Tree, find its boundary traversal. The traversal should be in the following order :-
1) Left Boundary Nodes :- Defined as the path from the root to the left-most node ie-the leaf node you 
could reach when you always travel preferring the left subtree over the right subtree.
2) Leaf Nodes :- All the leaf nodes except for the ones that are part of left or right boundary.
3) Reverse Right Boundary Nodes :- Defined as the path from the right-most node to the root. The right-most
node is the leaf node you could reach when you always travel preferring the right subtree over the left subtree.
Exclude the root from this as it was already included in the traversal of left boundary nodes.
NOTE :- If the root doesn't have a left subtree of right subtree, then the root itself is the left or right boundary.*/

#include<iostream>
#include<vector>
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

void TraverseLeft(node* root, vector<int> &ans){
    if((root == NULL) ||(root->left == NULL && root ->right == NULL))return; //if root is NULL or a leaf node then return
    ans.push_back(root -> data);
    if(root -> left) TraverseLeft(root -> left, ans); //if node's left exist then go to left
    else TraverseLeft(root -> right, ans); //if node's left side doesn't exist then go to right side
}

void TraverseLeaf(node* root, vector<int> &ans){
    if(root == NULL) return;
    if(root->left == NULL && root ->right == NULL){//leaf node
        ans.push_back(root -> data);
        return;
    } 
    TraverseLeaf(root -> left, ans);
    TraverseLeaf(root -> right, ans);
}

void TraverseRight(node* root, vector<int> &ans){
    if((root == NULL) ||(root->left == NULL && root ->right == NULL))return; //if root is NULL or a leaf node then return
    if(root -> right) TraverseRight(root -> right, ans); //if node's right exist then go to right
    else TraverseRight(root -> left, ans);
    ans.push_back(root -> data);
}

vector <int> BoundaryTraversal(node* root){
    vector<int>ans;
    if(root == NULL) return ans;
    ans.push_back(root -> data);
    TraverseLeft(root -> left, ans); //to print left part

    //traverse leaf node
    TraverseLeaf(root -> left, ans); //for left subtree
    TraverseLeaf(root -> right, ans); //for right subtree

    TraverseRight(root -> right, ans); //to print right part in reverse order
    return ans;
}

int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    //input =>  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    vector <int> v =  BoundaryTraversal(root);
    for(int i : v) cout << i << "  ";
}