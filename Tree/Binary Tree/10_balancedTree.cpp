// https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1

#include<bits/stdc++.h>
using namespace std;
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
class Solution {
  public:
    int height(Node* root){
        if(root==NULL)  return 0;
        int l = height(root->left);
        int r = height(root->right);
        
        return 1+max(l,r);
    }
    bool isBalanced(Node* root) {
        // Code here
        if(root==NULL)  return true;
        int lh = height(root->left);
        int rh = height(root->right);
        
        if(abs(lh-rh)>1)    return false;
        
        if(!isBalanced(root->left)||!isBalanced(root->right))  return false;
        
        return true;
        
    }
};
int main(){

return 0;
}