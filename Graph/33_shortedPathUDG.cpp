// https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> shortestPath(int V, vector<vector<int>> &edges, int src) {
        
        vector<vector<int>> graph(V);
        
        for(auto &e:edges){
            int u = e[0];
            int v = e[1];
            
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        queue<int>q;
        vector<int> dist(V,-1);
        q.push(src);
        dist[src]=0;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(auto ngh : graph[node]){
                if(dist[ngh]==-1){  //not visited
                    dist[ngh] = dist[node]+1;
                    q.push(ngh);
                }
            }
        }
        return dist;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}