// https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        bool ans = false;
        int l=0,h=nums.size()-1;

        while(l<=h){
            int mid = l+(h-l)/2;
            if(nums[mid]==target)
                return true;

            // l=m=h
            if(nums[l]==nums[mid] && nums[mid]==nums[h]){
                l++;
                h--;
            }

            // is left side sorted
            else if(nums[l]<=nums[mid]){
                if(nums[l]<=target && target<=nums[mid]){
                    h = mid-1;
                }
                else{
                    l=mid+1;
                }
            }

            // is right side sorted
            else if(nums[mid]<=nums[h]){
                if(nums[mid]<=target && target<=nums[h]){
                    l = mid+1;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return false;
        
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}