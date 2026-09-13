// https://leetcode.com/problems/unique-paths/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));

        dp[0][0] = 1;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0)
                    continue;
                int up = 0;
                int left = 0;

                if(i>0) up = dp[i-1][j];
                if(j>0) left = dp[i][j-1];

                dp[i][j] = up+left;
            }
            
        }
        return dp[m-1][n-1];
    }
};
class Solution {
public:
    int solve(int m,int n,vector<vector<int>> &dp){
        if(m==0 && n==0)
            return 1;

        if(m<0 || n<0)
            return 0;

        if(dp[m][n]!=-1)
            return dp[m][n];

        int left = solve(m,n-1,dp);
        int up = solve(m-1,n,dp);

        dp[m][n] = left+up;
        return dp[m][n];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return solve(m-1,n-1,dp);
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}