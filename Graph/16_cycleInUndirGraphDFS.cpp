#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool dfs(int node, int parent, vector<vector<int>>& edges, vector<int> &vis){
        vis[node] = 1;
        
        for(auto ngh : edges[node]){
            if(!vis[ngh]){
                if(dfs(ngh, node, edges, vis)){
                    return true;
                }
            }
            else if(ngh!=parent){
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        vector<vector<int>> list(V);
        
        for(auto &e : edges){
            int u = e[0];
            int v = e[1];
            
            list[u].push_back(v);
            list[v].push_back(u);
        }
        
        vector<int> vis(V,0);
        
        
        for(int i=0;i<V;i++){
            
            if(!vis[i]){
                if(dfs(i,-1,list,vis)){
                    return true;
                }
            }
            
            
        }
        return false;
    }
};
void main(){

}