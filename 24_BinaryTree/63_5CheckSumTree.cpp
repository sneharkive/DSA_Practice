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

pair<bool, int> isSumTreeFast(node* root){

  if(root == NULL){
    pair<bool, int> p = make_pair(true, 0);
    return p;
  }

  if(root -> left == NULL && root -> right == NULL){
    pair<bool, int> p = make_pair(true, root -> data);
    return p;
  }

  pair<bool, int> leftAns = isSumTreeFast(root -> left);
  pair<bool, int> rightAns = isSumTreeFast(root -> right);

  bool left = leftAns.first;
  bool right = rightAns.first;

  bool condition = root -> data == leftAns.second + rightAns.second;

  pair<bool, int> ans;

  if(left && right && condition){
    ans.first = true;
    ans.second = leftAns.second + rightAns.second + root -> data;
  }
  else ans.first = false;

  return ans;
}

bool isSumTree(node* root){

  return isSumTreeFast(root).first;
}


int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    //input =>  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<< "Sum Tree Check : " << isSumTree(root);
}