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

bool isIdentical(node* r1, node* r2){
  
  if(r1 == NULL && r2 == NULL )return true;
  if(r1 != NULL && r2 == NULL )return false;
  if(r1 == NULL && r2 != NULL )return false;

  bool left = isIdentical(r1 -> left, r2 -> left);
  bool right = isIdentical(r1 -> right, r2 -> right);

  bool value = r1 -> data == r2 -> data;

  return left && right && value;
}

int main(){
    node* r1 = NULL;
    node* r2 = NULL;
    r1 = BuildTree(r1); //creating a Tree
    //input =>  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    r2 = BuildTree(r2); //creating a Tree


    cout<< "Identical Check : " << isIdentical(r1, r2);
}