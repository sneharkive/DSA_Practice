//Ek bar left to right node ko print phir nrxt level pe right to left print karana
#include<iostream>
#include<queue>
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

vector <int> ZigZagTraversal(node* root){
    vector<int> result;
    if(root == NULL) return result;
    queue<node*> q;
    q.push(root);
    bool LeftToRight = true;
    while(!q.empty()){
        int size = q.size();
        vector<int> ans(size);
        for(int i = 0; i < size; i++){
            node* frontNode = q.front();
            q.pop();
            int index = LeftToRight ? i : size - i + 1;
            ans[index] = frontNode -> data;
            if(frontNode -> left) q.push(frontNode -> left);
            if(frontNode -> right) q.push(frontNode -> right);
        }
        LeftToRight = !LeftToRight;
        for(auto i: ans) result.push_back(i);
    }
    return result;
}

int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    //input =>  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    vector <int> v =  ZigZagTraversal(root);
    for(int i : v) cout << i << "  ";
}