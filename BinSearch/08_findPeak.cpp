// https://leetcode.com/problems/find-peak-element/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,h=nums.size()-1;

        while(l<=h){
            int mid = l+(h-l)/2;
            if(l==h)
                return l;

            else if(nums[mid]<nums[mid+1])
                l = mid+1;
            else
                h = mid;
        }
        return -1;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}