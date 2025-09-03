// https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1

#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
class Solution {
  public:
    int sumBT(Node* root) {
        // code here
        if(root==NULL)  return 0;
        int l = sumBT(root->left);
        int r = sumBT(root->right);
        
        return root->data + l + r;
        
    }
};
int main(){

return 0;
}