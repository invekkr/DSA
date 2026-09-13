// https://leetcode.com/problems/house-robber/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size();

        if(n==1)
            return nums[0];
        vector<int>dp(n,0);

        // base cases
        dp[0] = nums[0];

        dp[1] = max(dp[0],nums[1]);

        for(int i=2;i<n;i++){
            int pick = nums[i] + dp[i-2];
            int notpick = 0 + dp[i-1];

            dp[i] = max(pick,notpick);
        }
        return dp[n-1];
    }
};
class memoSolution {
public:
    int  solve(int idx, vector<int> &nums,vector<int> &dp){
        if(idx==0)
            return nums[idx];

        if(idx<0)
            return 0;

        if(dp[idx]!=-1)
            return dp[idx];

        int pick = nums[idx] + solve(idx-2,nums,dp);

        int notpick = 0 + solve(idx-1,nums,dp);

        dp[idx] = max(pick,notpick);
        return dp[idx];

    }
    int rob(vector<int>& nums) {
        int n =nums.size();
        vector<int> dp(n,-1);
        return solve(n-1,nums,dp);
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}