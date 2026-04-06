// https://leetcode.com/problems/find-eventual-safe-states/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> indegree(n,0);
        vector<vector<int>> revGraph(n);

        for(int i=0;i<n;i++){
            for(auto it:graph[i]){
                revGraph[it].push_back(i);
                indegree[i]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0)
                q.push(i);
        }
        vector<int> ans;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            ans.push_back(node);

            for(auto ngh : revGraph[node]){
                indegree[ngh]--;
                if(indegree[ngh]==0)
                    q.push(ngh);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}