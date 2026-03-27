#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void dfs(int node, vector<vector<int>>& list,vector<int> &vis, stack<int> &st){
        vis[node] = 1;
        
        for(auto ngh:list[node]){
            if(!vis[ngh]){
                dfs(ngh,list,vis,st);
            }
        }
        st.push(node);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        
        vector<vector<int>> list(V);
        
        for(auto &e : edges){
            int u = e[0];
            int v = e[1];
            
            list[u].push_back(v);
        }
        
        vector<int> vis(V,0);
        vector<int> ans;
        stack<int> st;
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,list,vis,st);
            }
        }
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
        
    }
};
void main(){

}