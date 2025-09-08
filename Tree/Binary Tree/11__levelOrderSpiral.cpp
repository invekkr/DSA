// https://www.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1&selectedLang=python3

#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
class Solution {
  public:
    vector<int> findSpiral(Node* root) {
        // code here
        vector<int> ans;
        queue<Node*> q;
        bool lr = false;
        if(root==NULL)  return ans;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            vector<int> v;
            
            for(int i=0;i<size;i++){
                Node* temp = q.front();
                q.pop();
                v.push_back(temp->data);
                
                if(temp->left)  q.push(temp->left);
                if(temp->right)  q.push(temp->right);
            }
            
            if(!lr){
                reverse(v.begin(),v.end());
            }
            
            for(int val : v){
                ans.push_back(val);
            }
            
            lr = !lr;
        }
        return ans;
    }
    
};
int main(){

return 0;
}