// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        // edges to list 
        
        vector<vector<int>> list(V);
        for(auto &e : edges){
            int u = e[0];
            int v = e[1];
            
            list[u].push_back(v);
            list[v].push_back(u);
        }
        
        vector<int> vis(V,0);   // to check already visited nodes
        
        for(int i=0;i<V;i++){   // we will traverse all the nodes for every component 
            if(!vis[i]){
                
                queue<pair<int,int>> q;
                q.push({i,-1});
                vis[i]=1;
                
                while(!q.empty()){
                    int node = q.front().first;
                    int parent = q.front().second;
                    
                    q.pop();
                    
                    for(auto it : list[node]){
                        if(!vis[it]){
                            vis[it]=1;
                            q.push({it,node});
                        }
                        else if(it!=parent){
                            return true;
                        }
                    }
                }
            }
        }
        return false;
        
    }
};
void main(){
    
}