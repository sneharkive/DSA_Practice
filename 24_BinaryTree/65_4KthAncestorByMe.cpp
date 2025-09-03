/*Given a binary tree of size N, a node and a positive integer k. Your task is to complete the function kthAncestor(), thr function
should return the kth ancestor of the given node in the binary tree. If there does not exist any such ancestor then return -1*/
//By me I submitted at GeeksForGeeks

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

void Solve(node* root, int &count, int &k, int node, int &ans){
    if(root == NULL) return;
    if(root -> data == node) {
        count ++;
        return;
    }
    if(count == 0 && k > count) Solve(root -> left, count, k, node, ans);
    if(count == 0 && k > count) Solve(root -> left, count, k, node, ans);
    if(count != 0 && k > count) count++;
    else if (count == k) {
        ans = root -> data;
        count++;
        return;
    }
    else if(count > k)return;
}

int KthAncestor(node* root, int k, int node){
    int count = 0, ans = -1;
    Solve(root, count, k, node, ans);
    return ans;
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