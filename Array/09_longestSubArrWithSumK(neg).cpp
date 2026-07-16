// https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        
        unordered_map<int,int> mp;
        long long prefixSum = 0;
        int maxLen = 0;
        
        // we will add a prefixSum = 0, bc it will be there at the start 
        mp[0] = -1;
        for(int i=0;i<n;i++){
            prefixSum+=arr[i];
            
            // check if prefixSum diff exist
            if(mp.find(prefixSum-k)!=mp.end())
                maxLen = max(maxLen,i-mp[prefixSum-k]);
                
            if(mp.find(prefixSum)==mp.end())
                mp[prefixSum]=i;
        }
        return maxLen;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}