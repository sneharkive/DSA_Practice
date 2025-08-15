#include<iostream>
#include<vector>
#include<queue>
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

void solve(node* root, vector<int> &ans, int level){
    if(root == NULL) return;
    if(level == ans.size()) ans.push_back(root -> data);
    solve(root -> right, ans, level + 1);
    solve(root -> left, ans, level + 1);
}

vector <int> RightView(node* root){
    vector<int>ans;
    solve(root, ans, 0);
    return ans;
}

int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    //input =>  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    vector <int> v =  RightView(root);
    for(int i : v) cout << i << "  ";
}