/*Given a binary tree & an integer K. Find the number of paths the tree which have their sum equal to K.
A path my start from any node and end at any node in the downward direction*/

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

void Solve(node* root, int k, int &count, vector<int> path){
    if(root == NULL) return ;
    path.push_back(root -> data);
    Solve(root -> left, k, count, path);
    Solve(root -> right, k, count, path);

    int size = path.size(), sum = 0;
    for(int i = size - 1; i >= 0; i--){
        sum += path[i];
        if(sum == k) count++;
    }
    path.pop_back();
}

int SumK(node* root, int k){
    vector<int> path;
    int count = 0;
    Solve(root, k, count, path);
}

int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    /*input =>  
    1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    */
    
}