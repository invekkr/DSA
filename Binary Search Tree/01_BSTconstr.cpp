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
Node* insert(Node* root, int val){
    if(root==NULL)  return new Node(val);

    if(val<root->data){
        root->left = insert(root->left,val);
    }
    else if(val > root->data) {
        root->right = insert(root->right, val); 
    }
    return root;
}
void inorder(Node* root) {
    if(root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
int main(){
    Node* root = NULL;
    root = insert(root, 50);
    insert(root, 15);
    insert(root, 31);
    insert(root, 2);
    insert(root, 99);
    insert(root, 65);
    insert(root, 30);

    cout << "Inorder traversal of BST: ";
    inorder(root);

return 0;
}