// https://leetcode.com/problems/koko-eating-bananas/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long canEat(vector<int>& piles, int h){
        long long totalHours = 0;
        for(int pile : piles){
            totalHours += ceil((double)pile/h);
        }
        return totalHours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(),piles.end());
        int low = 1,high = maxi;
        int ans = maxi;


        while(low<=high){
            int mid = low+(high-low)/2;

            long long hours = canEat(piles, mid);
            if(hours<=h){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
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