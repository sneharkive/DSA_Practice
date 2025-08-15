//Given 2 array of Inorder & Preorder traversal. Construct a tree and print the Postorder Traversal.
//Optimise way using Mapping
#include<iostream>
#include<map>
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

void createMapping(int in[], map<int, int> &nodeToindex, int n){
    for(int i = 0; i < n; i++) nodeToindex[in[i]] = i;
}

node* Solve(int in[], int pre[], int &index, int inorderStart, int inorderEnd, int n, map<int, int> &nodeToIndex){
    if(index >= n || inorderStart > inorderEnd) return NULL;
    int element = pre[index++];
    node* root = new node(element);
    int position = nodeToIndex[element];

    root -> left = Solve(in, pre, index, inorderStart, position - 1, n, nodeToIndex);
    root -> right = Solve(in, pre, index, position + 1, inorderEnd, n, nodeToIndex);
    return root;
}

node* BuildTree(int in[], int pre[], int n){
    int index = 0; //it is preorderIndex
    map<int, int> nodeToIndex;
    createMapping(in, nodeToIndex, n);
    node* ans = Solve(in, pre, index, 0, n - 1, n, nodeToIndex);
    return ans;
}

int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    /*input =>  
    1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    */
    
}