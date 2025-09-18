// https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        vector<int> ans;
        if(root==NULL)  return ans;
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            ans.push_back(q.front()->data);
            while(size--){
                Node* temp = q.front();
                q.pop();
                if(temp->left)  q.push(temp->left);
                if(temp->right)  q.push(temp->right);
            }
            
        }
        return ans;
        
    }
};
int main(){

return 0;
}