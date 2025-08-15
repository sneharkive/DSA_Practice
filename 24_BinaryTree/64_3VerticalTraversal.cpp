/*Given a Binery Tree, find the vertical traversal of it starting from the leftmost level to the rightmost level.
If there are multiple nodes passing through a vertical line, then they should be printed as they appear in Level Order traversal of the tree.*/

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

vector <int> VerticalOrderTraversal(node* root){
    map<int, map<int, vector<int> > > nodes;
    queue<pair<node*, pair<int, int> > >q;
    vector <int> ans;
    if(root == NULL) return ans;
    q.push(make_pair(root, make_pair(0, 0)));
    while(!q.empty()){
        pair<node*, pair<int, int> > temp = q.front();
        q.pop();
        node* frontNode = temp.first;
        int hd = temp.second.first;
        int lvl = temp.second.second;
        nodes[hd][lvl].push_back(frontNode -> data);
        if(frontNode -> left) q.push(make_pair(frontNode -> left, make_pair(hd-1, lvl+1)));
        if(frontNode -> right) q.push(make_pair(frontNode -> right, make_pair(hd+1, lvl+1)));
    }

    for(auto i: nodes)
        for(auto j : i.second)
            for(auto k : j.second) ans.push_back(k);
    
    return ans;
}

int main(){
    node* root = NULL;
    root = BuildTree(root); //creating a Tree
    //input =>  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    vector <int> v =  VerticalOrderTraversal(root);
    for(int i : v) cout << i << "  ";
}