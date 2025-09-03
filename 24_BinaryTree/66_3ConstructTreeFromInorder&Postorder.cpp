//Given 2 array of Inorder & Postorder traversal. Construct a tree and print the Postorder Traversal.

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

int findPosition(int in[], int element, int n){
    for(int i = 0; i < n; i++)
        if(in[i] == element) return i;
    return -1;
}

node* Solve(int in[], int post[], int &index, int inorderStart, int inorderEnd, int n){
    if(index < 0 || inorderStart > inorderEnd) return NULL;
    int element = post[index--];
    node* root = new node(element);
    int position = findPosition(in, element, n);

    root -> right = Solve(in, post, index, position + 1, inorderEnd, n);
    root -> left = Solve(in, post, index, inorderStart, position - 1, n);

    return root;
}

node* BuildTreeFromInPost(int in[], int post[], int n){
    int index = n - 1; //it is postorderIndex
    node* ans = Solve(in, post, index, 0, n - 1, n);
    return ans;
}

int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    /*input =>  
    1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    */
    
}
