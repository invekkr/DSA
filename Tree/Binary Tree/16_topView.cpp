// https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1
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
    vector<int> topView(Node *root) {
        // code here
        vector<int>ans;
        if(!root)   return ans;
        map<int,int> mp;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            Node* node = temp.first;
            int d = temp.second;    // horizontal distance from root node
            
            if(mp.find(d)==mp.end()){   // checking if the indexed distance already exist
                mp[d]=node->data;
            }
            
            if(node->left){
                q.push({node->left,d-1});
            }
            if(node->right){
                q.push({node->right,d+1});
            }
        }
        for(auto &it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
int main(){

return 0;
}