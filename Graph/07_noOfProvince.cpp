// https://leetcode.com/problems/number-of-provinces/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // using adjList
    int helper(vector<vector<int>>& isConnected, vector<vector<int>> &adjList, vector<int> &vis, int n){
        int comp = 0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                comp++;
                vis[i]=1;
                queue<int>q;
                q.push(i);

                while(!q.empty()){
                    int t = q.front();
                    q.pop();

                    for(auto it : adjList[t]){
                        if(!vis[it]){
                            vis[it]=1;
                            q.push(it);
                        }
                    }
                }
            }
        }
        return comp;
    }
    void mtxToList(vector<vector<int>>& isConnected, vector<vector<int>> &adjList, int n ){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    adjList[i].push_back(j);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adjList(n);
        mtxToList(isConnected,adjList,n);
        vector<int> vis(n,0);
        return helper(isConnected,adjList,vis,n);

    }
};
int main(){

return 0;
}