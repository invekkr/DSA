#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool dfs(int node,vector<int>&vis, vector<int>&path, vector<vector<int>> &graph){
        vis[node] = 1;
        path[node] = 1;
        
        for(auto ngh : graph[node]){
            // if not visited 
            if(!vis[ngh]){
                if(dfs(ngh,vis,path,graph))
                    return true;
            }
            
            // if visited and path also visited
            else if(path[ngh])
                return true;    // cycle detected
        }
        
        path[node]=0;
        return false;   // when till last no cycle detected
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        vector<vector<int>> graph(V);
        
        for(auto &e:edges){
            int u = e[0];
            int v = e[1];
            
            graph[u].push_back(v);
        }
        
        vector<int> vis(V,0),path(V,0);
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,vis,path,graph))
                    return true;
            }
        }
        return false;
        
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}