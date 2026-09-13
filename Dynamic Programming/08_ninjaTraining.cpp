// https://www.geeksforgeeks.org/problems/geeks-training/1

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int solveMemo(int n, int last, vector<vector<int>> &arr, vector<vector<int>> &dp){
        
        // base case when we reach the last day
        if(n==0){
            int maxi = INT_MIN;
            for(int l=0;l<3;l++){
                if(l!=last){
                    maxi  = max(maxi,arr[n][l]);
                }
            }
            dp[n][last] = maxi;
            return dp[n][last];
        }
        
        if(dp[n][last]!=-1)
            return dp[n][last];
        
        // will traverse from 1->3 checking all the events for max score
        int maxi = INT_MIN;
        for(int l=0;l<3;l++){
            //if last is visited
            if(l!=last){
                int score = arr[n][l] + solveMemo(n-1,l,arr,dp);
                maxi = max(maxi,score);
            }
        }
        dp[n][last] = maxi;
        return dp[n][last];
    }
    int maximumPoints(vector<vector<int>>& mat) {
       int n = mat.size();
       int m = mat[0].size();
       vector<vector<int>> dp(n,vector<int> (4,-1));
       return solveMemo(n-1,m,mat,dp);
        
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}