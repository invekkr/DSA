// https://www.geeksforgeeks.org/problems/mirror-tree/1

#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
class Solution {
  public:
    void mirror(Node* node) {
        // code here
        if(node==NULL)  return;
        swap(node->left,node->right);
        mirror(node->left);
        mirror(node->right);
    }
};
int main(){

return 0;
}