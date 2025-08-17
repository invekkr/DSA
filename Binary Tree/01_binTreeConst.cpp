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
void inOrder(Node* head){
    if(head == NULL)    return;
    inOrder(head->left);
    cout<<head->data;
    inOrder(head->right);

}
void preOrder(Node* head){
    if(head==NULL)  return;
    cout<<head->data;
    preOrder(head->left);
    preOrder(head->right);
}
void postOrder(Node* head){
    if(head==NULL)  return;
    postOrder(head->left);
    postOrder(head->right);
    cout<<head->data;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    inOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    postOrder(root);
    
return 0;
}