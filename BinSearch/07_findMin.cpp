// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,h=nums.size()-1;

        while(l<=h){
            if(nums[l]<=nums[h])
                return nums[l];

            int mid = l+(h-l)/2;

            if(nums[l]<=nums[mid])
                l = mid+1;

            else
                h = mid;
        }
        return nums[l];
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}