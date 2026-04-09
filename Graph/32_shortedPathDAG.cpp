// https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph/1
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void topoDFS(int node,stack<int>&s, vector<int>&vis,vector<vector<pair<int,int>>>&graph){
        vis[node]=1;
        
        for(auto it:graph[node]){
            int v = it.first;
            if(!vis[v]){
                
                topoDFS(v,s,vis,graph);
            }
        }
        
        s.push(node);
    }
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
    
    // created adj list 
        vector<vector<pair<int,int>>> graph(V);
        for(auto &e:edges){
            int u = e[0];
            int v = e[1];
            int w = e[2];
            
            graph[u].push_back({v,w});
        }
        
        vector<int>vis(V,0);
        stack<int>st;
        
        for(int i=0;i<V;i++){
            if(!vis[i])
                topoDFS(i,st,vis,graph);
        }
        
        vector<int> dist(V,INT_MAX);
        dist[0] = 0;
        
        
        while(!st.empty()){
            int node = st.top();
            st.pop();
            
            // processing only if node reachable
            if(dist[node]!=INT_MAX){
                for(auto it:graph[node]){
                    int v = it.first;
                    int w = it.second;
                    
                    // relaxation
                    if(dist[node]+w < dist[v]){
                        dist[v] = dist[node]+w;
                    }
                }
            }
        }
        
        //marking unreachable nodes as -1
        
        for(int i=0;i<V;i++){
            if(dist[i]==INT_MAX)
                dist[i]=-1;
        }
        
        return dist;
        
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}