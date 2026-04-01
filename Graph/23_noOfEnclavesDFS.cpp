// https://leetcode.com/problems/number-of-enclaves/description/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(vector<vector<int>>& grid, int r,int c){
        int m = grid.size();
        int n = grid[0].size();

        if(r<0 || c<0 || r>=m || c>=n || grid[r][c]!=1)
            return;
        
        grid[r][c] = 0; // marked as visited 
        dfs(grid,r-1,c);
        dfs(grid,r+1,c);
        dfs(grid,r,c-1);
        dfs(grid,r,c+1);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();


        // Row
        for(int i=0;i<n;i++){
            if(grid[0][i]==1)
                dfs(grid,0,i);
            if(grid[m-1][i]==1)
                dfs(grid,m-1,i);
        }

        // Coloumn
        for(int i=0;i<m;i++){
            if(grid[i][0]==1)
                dfs(grid,i,0);
            if(grid[i][n-1]==1)
                dfs(grid,i,n-1);
        }

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