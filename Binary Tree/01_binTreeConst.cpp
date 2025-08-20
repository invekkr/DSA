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

void inOrder(Node* head){
    if(head == NULL)    return;
    inOrder(head->left);
    cout<<head->data<<" ";
    inOrder(head->right);

}
void preOrder(Node* head){
    if(head==NULL)  return;
    cout<<head->data<<" ";
    preOrder(head->left);
    preOrder(head->right);
}
void postOrder(Node* head){
    if(head==NULL)  return;
    postOrder(head->left);
    postOrder(head->right);
    cout<<head->data<<" ";
}
int main(){

    Node* root = NULL;
    root = buildTree(root);
    inOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    postOrder(root);
    
return 0;
}