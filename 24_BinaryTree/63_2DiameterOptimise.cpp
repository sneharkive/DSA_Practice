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

pair<int, int> diameterFast(node* root){
    if(root == NULL){
        pair<int, int> p = make_pair(0, 0);
        return p;
    }

    pair<int, int> left = diameterFast(root -> left);
    pair<int, int> right = diameterFast(root -> right);

    int leftDia = left.first;
    int rightDia = right.first;
    int allDia = left.second + right.second + 1;
    
    pair<int, int> ans;
    ans.first = max(leftDia, max(rightDia, allDia));
    ans.second = max(left.second, right.second) + 1;

    return ans;
}

int DiameterBT(node* root){

  return diameterFast(root).first;
}

int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    //input =>  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<< "Diameter : " << DiameterBT(root);
}