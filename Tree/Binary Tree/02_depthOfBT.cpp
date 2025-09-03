//https://leetcode.com/problems/maximum-depth-of-binary-tree/
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }

};

int maxDepth(Node* root){
    if(root == NULL)  return 0;

    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    return 1 + max(lh, rh);
}
Node* buildTree(Node* root){
    cout<<"Enter value for Node : "<<endl;
    int x;
    cin>>x;
    if(x==-1)   return NULL;

    root = new Node(x);

    cout<<"Enter data to the left of "<<x<<endl;
    root->left = buildTree(root->left);
    
    cout<<"Enter data to the right of "<<x<<endl;
    root->right = buildTree(root->right);
    
    return root;

}

void levelOrder(Node* head){
    if(head==NULL)  return;
    queue<Node*> q;
    q.push(head);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
}
int main(){

    Node* root = NULL;
    root = buildTree(root);
    levelOrder(root);
    cout<<endl;
    cout<<"Maximum Depth of Tree: "<<maxDepth(root)<<endl;    
return 0;
}