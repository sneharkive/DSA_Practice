/*Given a binary tree with a value associated with each node, we need to choose a subset of these nodes such that sum of 
chosen nodes is maximum under a constraint that no two chosen node in subset should be directly connected that is, if we 
have taken a node in our sum then we can't take its any children or parets in consideration and vice versa.*/

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

pair<int, int> Solve(node* root){
    if(root == NULL){
        pair<int ,int> p = make_pair(0,0);
        return p;
    }
    pair<int, int> left = Solve(root -> left);
    pair<int, int> right = Solve(root -> right);
    pair< int, int> res;
    res.first = root -> data + left.second + right.second;
    res.second = (max(left.first, left.second) + max(right.first, right.second));
    return res;
}

int getMaxSum(node* root){
    pair<int, int> ans = Solve(root);
    return max(ans.first, ans.second);
}

int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    /*input =>  
    1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    */
    
}