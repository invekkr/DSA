#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {       
        vector<vector<int>> list(V);
        
        for(auto &e:edges){
            int u = e[0];
            int v = e[1];
            
            list[u].push_back(v);
        }
        
        queue<int> q;
        vector<int> indegree(V,0);
        
        // count indegree for all nodes
        for(int i=0;i<V;i++){
            for(auto it : list[i]){
                indegree[it]++;
            }
        }       
        vector<int> ans;
        
        // will push all the 0 indegree nodes in queue as they will appear first
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            ans.push_back(node);
            
            for(auto ngh: list[node]){
                indegree[ngh]--;
                if(indegree[ngh]==0){
                    q.push(ngh);
                }
            }
            
        }return ans;
        
    }
};
void main(){

}