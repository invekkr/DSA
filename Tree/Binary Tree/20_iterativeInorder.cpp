#include <bits/stdc++.h>
using namespace std;
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        vector<int> ans;
        stack<Node*>st;
        
        Node* curr = root;
        
        while(!st.empty() || curr!=NULL){
            
            // going in left depth as LNR
            if(curr!=NULL){
                st.push(curr);
                curr = curr->left;
            }
            
            else{
                // we are a postion where we are at last node i.e, left = NULL
                Node* temp = st.top();
                st.pop();
                
                ans.push_back(temp->data);
                
                // now we will push the right elem as LNR we alreay trversed Left in "if case" 
                //and pushed the temp->data in "N" now turn of "R"
                
                curr = temp->right;
            }
        }
        return ans;
        
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}\