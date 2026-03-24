// https://leetcode.com/problems/number-of-provinces/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(vector<vector<int>>& mtx, vector<int>&vis, int node){
        vis[node]=1;

        for(int i=0;i<mtx.size();i++){
            if(mtx[node][i]==1 && !vis[i]){
                dfs(mtx,vis,i);
            }
        }

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n,0);
        int ans = 0;

        for(int i=0;i<n;i++){
            if(!vis[i]){
                ans++;
                dfs(isConnected,vis,i);
            }
        }
        return ans;

    }
};
int main(){

return 0;
}