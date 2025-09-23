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

pair<bool, int> isBalancedFast(node* root){

  if(root == NULL){
    pair<bool, int> p = make_pair(true, 0);
    return p;
  }

  pair<bool, int> leftFast = isBalancedFast(root -> left);
  pair<bool, int> rightFast = isBalancedFast(root -> right);

  bool left = leftFast.first;
  bool right = rightFast.first;
 
  bool diff = abs(leftFast.second - rightFast.second) <= 1;

  pair<bool, int> ans;

  ans.second = max(leftFast.second, rightFast.second) + 1;

  ans.first = left && right && diff;

  return ans;
}


bool isBalanced(node* root){

  return isBalancedFast(root).first;
}


int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    //input =>  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<< "Balanced Check : " << isBalanced(root);
}