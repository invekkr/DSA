#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void dfs(int r, int c, vector<vector<char>>& grid, vector<vector<int>>& vis){
        int m = grid.size();
        int n = grid[0].size();
        
        vis[r][c] = 1;
        
        int dirRow[8] = {-1,-1,-1,0,0,1,1,1};
        int dirCol[8] = {-1,0,1,-1,1,-1,0,1};
        
        for(int i=0;i<8;i++){
            int curRow = r + dirRow[i];
            int curCol = c + dirCol[i];
            
            if(curRow>=0 && curRow<m && curCol>=0 && curCol<n && grid[curRow][curCol]=='L' && !vis[curRow][curCol]){
                dfs(curRow,curCol,grid,vis);
            }
        }
    }
    int countIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        vector<vector<int>> vis(m, vector<int>(n,0));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='L' && !vis[i][j]){
                    count++;
                    dfs(i,j,grid,vis);
                }
            }
        }
        return count;
    }
};
void main(){

}