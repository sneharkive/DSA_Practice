/*InOrder Traversal :- LeftNodeRight(LNR)
PreOrder Traversal :- NodeLeftRight(NLR)
PostOrder Traversal :- LeftRightNode(LRN)    whenever you get 'N'(Node) you need to print that Node*/

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

void LevelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }
        else {
            cout<< temp -> data << "  ";
            if(temp -> left) q.push(temp -> left);
            if(temp -> right) q.push(temp -> right);
        }
    }
}

void InOrder(node* root){
    if(root == NULL)return; //base case
    InOrder(root -> left);
    cout<<root -> data << "  ";
    InOrder(root -> right);
}

void PreOrder(node* root){
    if(root == NULL)return; //base case
    cout<<root -> data << "  ";
    PreOrder(root -> left);
    PreOrder(root -> right);
}

void PostOrder(node* root){
    if(root == NULL)return; //base case
    PostOrder(root -> left);
    PostOrder(root -> right);
    cout<<root -> data << "  ";
}

int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    //input =>  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << endl << endl << "Level Order Traversal :  " << endl;
    LevelOrderTraversal(root);
    cout << endl << endl << "Inorder Traversal :  ";
    InOrder(root);
    cout << endl  << endl << "Preorder Traversal :  " ;
    PreOrder(root);
    cout << endl << endl << "Postorder Traversal :  " ;
    PostOrder(root);

}
