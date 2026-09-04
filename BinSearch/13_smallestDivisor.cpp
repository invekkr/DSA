// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int check(vector<int> &arr, int t, int num){
        int n = arr.size();
        int tsum = 0;

        for(auto a : arr){
            tsum += ceil((double)a/num);
        }
        return tsum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = *max_element(nums.begin(),nums.end());

        int l=1,h=maxi;
        int ans;
        while(l<=h){
            int mid = l+(h-l)/2;
            int val = check(nums,threshold,mid);

            if(val<=threshold){
                ans = mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}