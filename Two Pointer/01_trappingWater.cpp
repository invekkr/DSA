// https://leetcode.com/problems/trapping-rain-water/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1;
        int leftMax=height[l];
        int rightMax=height[r];
        int ans = 0;

        if(height.size()<=2)
            return 0;

        while(l<r){
            if(height[l]<=height[r]){
                l++;
                if(height[l]>leftMax){
                    leftMax = height[l];
                }
                ans += (leftMax - height[l]);
            }
            else{
                r--;
                if(height[r]>rightMax){
                    rightMax = height[r];
                }
                ans += (rightMax - height[r]);
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
