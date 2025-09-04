// https://www.geeksforgeeks.org/problems/count-non-leaf-nodes-in-tree/1
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        // Code here
        if(root==NULL)  return 0;
        if(!root->left && !root->right){
            return 0;
        }
        int l = countNonLeafNodes(root->left);
        int r = countNonLeafNodes(root->right);
        
        return 1+l+r;
    }
};
int main(){

return 0;
}