// https://leetcode.com/problems/is-graph-bipartite/description/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool dfs(int node, int col, vector<int> &color, vector<vector<int>>& graph){
        // we will mark 0/1 in the color array
        color[node]=col;

        for(auto ngh : graph[node]){
            // if not visited then do recursion
            if(color[ngh]==-1){
                if(!dfs(ngh,1-col,color,graph))
                return false;

            }
            
            // if visited, check if adj node similar
            else if(color[ngh]==color[node])
                return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n,-1);

        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(!dfs(i,1,color,graph))
                    return false;
            }
        }
        return true;
    }
};
void main(){

}