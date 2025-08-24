#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    int height;

    Node(int val) {
        data = val;
        left = right = NULL;
        height = 1;  // every new node starts with height 1
    }
};

//height of a node
int getHeight(Node* root) {
    if(root == NULL) return 0;
    return root->height;
}

//balance factor
int getBalance(Node* root) {
    if(root == NULL) return 0;
    return getHeight(root->left) - getHeight(root->right);
}

//update height
void updateHeight(Node* root) {
    if(root)
        root->height = 1 + max(getHeight(root->left), getHeight(root->right));
}

// Right Rotate
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    updateHeight(y);
    updateHeight(x);

    return x; // new root
}

// Left Rotate
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    updateHeight(x);
    updateHeight(y);

    return y; // new root
}

// Insert into AVL
Node* insert(Node* root, int key) {
    //BST insertion
    if(root == NULL) return new Node(key);

    if(key < root->data)
        root->left = insert(root->left, key);
    else if(key > root->data)
        root->right = insert(root->right, key);
    else
        return root; 

    //Update height
    updateHeight(root);

    //Get balance factor
    int balance = getBalance(root);

    //Balance the tree

    // Case 1: Left Left
    if(balance > 1 && key < root->left->data)
        return rightRotate(root);

    // Case 2: Right Right
    if(balance < -1 && key > root->right->data)
        return leftRotate(root);

    // Case 3: Left Right
    if(balance > 1 && key > root->left->data) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // Case 4: Right Left
    if(balance < -1 && key < root->right->data) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root; // return unchanged node
}

// Traversals
void preOrder(Node* root) {
    if(root == NULL) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root) {
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node* root) {
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = NULL;

    vector<int> values = {10, 20, 30, 40, 50, 25};
    for(int val : values) {
        root = insert(root, val);
    }

    cout << "PreOrder Traversal: ";
    preOrder(root);
    cout << endl;

    cout << "InOrder Traversal: ";
    inOrder(root);
    cout << endl;

    cout << "PostOrder Traversal: ";
    postOrder(root);
    cout << endl;

    return 0;
}
