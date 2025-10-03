// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> arr;
        if(!root)   return arr;

        bool dir = false;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){ 
            int size = q.size();           
            vector<int>a;
            while(size--){
                TreeNode* temp = q.front();
                q.pop();
                a.push_back(temp->val);
                if(temp->left)  q.push(temp->left);
                if(temp->right)  q.push(temp->right);
            }
            if(dir){
                reverse(a.begin(),a.end());
            }
            dir = !dir;
            arr.push_back(a);

        }
        return arr;
    }
};
int main(){

return 0;
}