// https://leetcode.com/problems/jump-game/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int dist = 0;

        for(int i=0;i<nums.size();i++){
            if(i>dist)
                return false;
            dist = max(dist,nums[i]+i);
            if(dist>=nums.size()-1)
                return true;

        }
        return false;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}