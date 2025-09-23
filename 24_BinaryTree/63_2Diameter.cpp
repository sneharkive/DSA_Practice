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

int HeightBT(node* root){
  if(root == NULL) return 0;

  int leftH = HeightBT(root -> left);
  int rightH = HeightBT(root -> right);

  int ans = max(leftH, rightH) + 1;

  return ans;
}

int DiameterBT(node* root){
  if(root == NULL) return 0;

  int leftDia = DiameterBT(root -> left);
  int rightDia = DiameterBT(root -> right);
  int allDia = HeightBT(root-> left) + HeightBT(root -> right) + 1;

  int ans = max(leftDia, max(rightDia, allDia));
  return ans;
}


int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    //input =>  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<< "Height : " << DiameterBT(root);
}