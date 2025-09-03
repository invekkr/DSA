// https://www.geeksforgeeks.org/problems/size-of-binary-tree/1
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
    int count = 0;
    int getSize(Node* node) {
        // code here
        if(node==NULL)  return 0;
        return 1+ getSize(node->left) + getSize(node->right);
    }
};
int main(){

return 0;
}