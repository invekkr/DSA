// https://www.geeksforgeeks.org/problems/geek-jump/1

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int minCost(vector<int>& height) {
        int n = height.size();
        vector<int> dp(n,0);
        
        // base case : as it is a bottom-up approach
        dp[0] = 0;
        
        for(int i=1;i<n;i++){
            int one = dp[i-1] + abs(height[i]-height[i-1]);
             
            
            int two = INT_MAX;
            if(i>1)
                two = dp[i-2] + abs(height[i]-height[i-2]);
                
            dp[i] = min(one,two);
        }
        // last elem of the dp array will be our ans as it will contain the total sum
        return dp[n-1];
    }
};

class Solution {
  public:
    int solve(int n, vector<int> &arr,vector<int> &dp){
        
        if(n==0)
            return 0;
        
        
        // if already computed
        if(dp[n]!=-1)
            return dp[n];
        
        int l,r=INT_MAX;
        
        l = abs(arr[n]-arr[n-1]) + solve(n-1,arr,dp);
        if(n>=2)
            r = abs(arr[n]-arr[n-2]) + solve(n-2,arr,dp);
            
        dp[n] = min(l,r);
        
        return dp[n];
    }
    int minCost(vector<int>& height) {
        // Code here
       
        int n = height.size();
        vector<int> dp(n,-1);
        return solve(n-1,height,dp);
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}