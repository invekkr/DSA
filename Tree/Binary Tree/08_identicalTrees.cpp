// https://www.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1
#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
class Solution {
  public:
    bool isIdentical(Node* root1, Node* root2) {
        // code here
        if(root1==NULL && root2==NULL)  return true;
        
        if(root1 && !root2)  return false;
        if(!root1 && root2)  return false;
        
        if(root1->data!=root2->data)    return false;
        
        bool l = isIdentical(root1->left,root2->left);
        bool r = isIdentical(root1->right,root2->right);
        
        return l&&r;
    }
};
int main(){

return 0;
}