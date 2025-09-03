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

vector <int> BottomView(node* root){
    vector<int>ans;
    if(root == NULL) return ans;
    map <int, int> topNode;
    queue<pair<node*, int> > q;
    while(!q.empty()){
        pair<node* , int> temp = q.front();
        q.pop();
        node* frontNode = temp.first;
        int hd = temp.second;

        topNode[hd] = frontNode -> data;
        if(frontNode -> left) q.push(make_pair(frontNode->left, hd-1));
        if(frontNode -> right) q.push(make_pair(frontNode->right, hd+1));
    }
    for(auto i:topNode) ans.push_back(i.second);
    return ans;
}

int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    //input =>  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    vector <int> v =  BottomView(root);
    for(int i : v) cout << i << "  ";
}