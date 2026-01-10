// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int currSum = 0,maxi = INT_MIN;
        for(int i=0;i<k;i++){
            currSum+=arr[i];
        }
        maxi = max(currSum,maxi);
        
        for(int i=k;i<n;i++){
            currSum = currSum - arr[i-k] + arr[i];
            maxi = max(maxi,currSum);
        }
        return maxi;
        
        
    }
};
int main(){
    return 0;
}