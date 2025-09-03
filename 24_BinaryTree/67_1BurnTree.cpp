/*Given a bianry tree and a node called target. Find the minimum time required to burn the complete binary tree if the target is set
on fire. It is known that in 1 second all nodes connected to a given node get burned. That is its left child, right child and parent
ALGO :- 1) Create nodeToParent mapping
        2) Find target node
        3) Burn the tree in min tree*/

#include<iostream>
#include<map>
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

node* CreateParentMapping(node* root, int target, map<node*, node*> &nodeToParent){
    node* res = NULL;
    queue<node*> q;
    q.push(root);
    nodeToParent[root] = NULL;
    while(!q.empty()){
        node* front = q.front();
        q.pop();
        if(front -> data == target) res = front;
        if(front -> left){
            nodeToParent[front -> left] = front;
            q.push(front -> left);
        }
        if(front -> right){
            nodeToParent[front -> right] = front;
            q.push(front -> right);
        }
    }
    return res;
}

int BurnTree(node* root, map<node* , node*> &nodeTOParent){
    map<node*, bool> visited;
    queue<node*>q;
    q.push(root);
    visited[root] = true;
    int ans = 0;
    while(!q.empty()){
        bool flag = false;
        int size = q.size();
        for(int i = 0; i < size; i++){
            node* front = q.front();
            q.pop();
            
            if(front -> left && !visited[front -> left]){
                flag = 1;
                q.push(front -> left);
                visited[front -> left] = true;
            }
            if(front -> right && !visited[front -> right]){
                flag = 1;
                q.push(front -> right);
                visited[front -> right] = true;
            }
            if(nodeTOParent[front] && !visited[nodeTOParent[front]]){
                flag = 1;
                q.push(nodeTOParent[front]);
                visited[nodeTOParent[front]] = true;
            }
        }
        if(flag == 1) ans++;
    }
    return ans;
}

int MinTime(node* root, int target){
    map<node* , node*> nodeTOParent;
    node* targetNode = CreateParentMapping(root, target, nodeTOParent);
    int ans = BurnTree(targetNode, nodeTOParent);
    return ans;
}
