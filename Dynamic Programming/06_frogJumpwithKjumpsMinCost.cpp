// https://www.geeksforgeeks.org/problems/minimal-cost/1

#include <bits/stdc++.h>
using namespace std;
class tabSolution {
  public:
    int minimizeCost(int k, vector<int>& arr) {
        int n = arr.size();
        
        vector<int> dp(n,0);
        
        for(int i=1;i<n;i++){
            int ans = INT_MAX;
            for(int j=1;j<=k && i-j>=0;j++){
                int cost = dp[i-j] + abs(arr[i]-arr[i-j]);
                ans = min(ans,cost);
            }
            dp[i] = ans;
        }
        
        return dp[n-1];
        
    }
};
class momoSolution {
  public:
    int solve(int n, int k, vector<int> &arr, vector<int> &dp){
        // base case
        if(n==0)
            return 0;
            
            
        if(dp[n]!=-1)
            return dp[n];
            
        int ans = INT_MAX;
        // we will check for steps from 1 to k
        for(int i=1;i<=k && n-i>=0; i++){
            int cost = solve(n-i,k,arr,dp) + abs(arr[n]-arr[n-i]);
            ans = min(ans,cost);
        }
        dp[n]=ans;
        return dp[n];
    }
    int minimizeCost(int k, vector<int>& arr) {
        // code here
        
        int n = arr.size();
        vector<int> dp(n,-1);
        return solve(n-1,k,arr,dp);
        
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}