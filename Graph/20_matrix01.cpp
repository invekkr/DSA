// https://leetcode.com/problems/01-matrix/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        queue<pair<int,int>> q;
        vector<vector<int>> dist(m,vector<int>(n,-1));

        // traverse for 0 and queue
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    dist[i][j]=0;
                }
            }
        }

        int dr[4] = {-1,1,0,0};
        int dc[4] = {0,0,1,-1};

        while(!q.empty()){
            auto [r,c] = q.front();
            q.pop();

            for(int i=0;i<4;i++){
                int cr = r+dr[i];
                int cc = c+dc[i];

                if(cr>=0 && cc>=0 && cr<m && cc<n && dist[cr][cc]==-1){
                    dist[cr][cc] = dist[r][c] + 1;
                    q.push({cr,cc});
                }
            }
        }
        return dist;
    }
};
void main(){

}