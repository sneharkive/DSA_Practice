/*The diameter of a tree (sometimes called the width) is the number of nodes on the longest path between two end nodes (leaf/root nodes are called end nodes). 
The diagram below shows two trees each with diameter nine, the leaves that from the ends of the longest path are shaded 
(note that there is more than one path in each tree of length nine, but no path longer than nine nodes).*/

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

int HeightOfBinaryTree(node* root){
    if(root == NULL) return 0;
    int left = HeightOfBinaryTree(root -> left);
    int right = HeightOfBinaryTree(root -> right);
    return max(left, right) + 1;
}

int Diameter(node* root){
    if(root == NULL) return 0;
    int op1 = Diameter(root -> left);
    int op2 = Diameter(root -> right);
    int op3 = HeightOfBinaryTree(root -> left) + HeightOfBinaryTree(root -> right) + 1;

    return max(op1, max(op2, op3));
}

pair<int, int> DiameterBetter(node* root){ //Modified version of "Diameter function"
//here in this pair we store diameter(at first) & height(at second)
    if(root == NULL) {
        pair<int, int> p = make_pair(0,0);
        return p;
    }
    pair<int, int> left = DiameterBetter(root -> left);
    pair<int, int> right = DiameterBetter(root -> right);
    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;
    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;
    return ans;
}
    
int DiameterBetterAppraoch(node* root){
    return DiameterBetter(root).first; //return diameter part only
}

int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    //input =>  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    
    cout << endl <<"Diameter of the Binary Tree is : " << Diameter(root);

    cout << endl <<"Diameter of the Binary Tree is : " << DiameterBetterAppraoch(root);
}