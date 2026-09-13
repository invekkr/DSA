// https://leetcode.com/problems/minimum-path-sum/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(int row,int col, vector<vector<int>>& grid, vector<vector<int>>& dp){
        if(row==0 && col==0)
            return grid[0][0];

        if(row<0 || col<0)
            return 1e8;

        if(dp[row][col]!=0)
            return dp[row][col];

        int left = 0;
        int up = 0;

        if(col>=0)
            left = grid[row][col] + solve(row,col-1,grid,dp);
        if(row>=0)   
            up = grid[row][col] + solve(row-1,col,grid,dp);

        dp[row][col] = min(up,left);

        return dp[row][col];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int row  = grid.size();
        int col = grid[0].size();
        vector<vector<int>> dp(row, vector<int>(col,0));
        return solve(row-1,col-1,grid,dp);
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}