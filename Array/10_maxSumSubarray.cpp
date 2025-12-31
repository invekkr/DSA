// https://leetcode.com/problems/maximum-subarray/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = nums[0];
        int maxSum = nums[0];

        for(int i=1;i<nums.size();i++){
            currSum = max(nums[i],currSum+nums[i]);
            maxSum = max(maxSum,currSum);
        }
        return maxSum;
    }
};
int main(){

return 0;
}