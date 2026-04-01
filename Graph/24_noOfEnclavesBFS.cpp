// https://leetcode.com/problems/number-of-enclaves/description/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int,int>> q;

        // pushing along coloumn
        for(int i=0;i<m;i++){
            if(grid[i][0]==1){
                q.push({i,0});
                grid[i][0]=0;
            }
            if(grid[i][n-1]==1){
                q.push({i,n-1});
                grid[i][n-1]=0;
            }
        }

        // pushing along row
        for(int i=0;i<n;i++){
            if(grid[0][i]==1){
                q.push({0,i});
                grid[0][i]=0;
            }
            if(grid[m-1][i]==1){
                q.push({m-1,i});
                grid[m-1][i]=0;
            }
        }

        int dr[4] = {1,-1,0,0};
        int dc[4] = {0,0,1,-1};

        // BFS

        while(!q.empty()){
            auto [r,c] = q.front();
            q.pop();

            for(int i=0;i<4;i++){
                int cr = r+dr[i];
                int cc = c+dc[i];

                if(cr>=0 && cc>=0 && cr<m && cc<n && grid[cr][cc]==1){
                    q.push({cr,cc});
                    grid[cr][cc]=0;
                }
            }
        }

        // Now Count island region 
        int c = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1)
                    c++;
            }
        }
        return c;
    }
};
void main(){

}