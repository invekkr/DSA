// https://www.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        if(root==NULL)  return 0;
        if(!root->left && !root->right) return 1;
        int l = countLeaves(root->left);
        int r = countLeaves(root->right);
        
        return l+r;
        
    }
};
int main(){

return 0;
}