// https://leetcode.com/problems/permutations/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(vector<int> &list, vector<int> &vis,vector<vector<int>>&ans, vector<int> &nums){
        if(list.size()==nums.size()){
            ans.push_back(list);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(vis[i]==0){
                vis[i]=1;
                list.push_back(nums[i]);

                solve(list,vis,ans,nums);

                list.pop_back();
                vis[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> list;
        vector<vector<int>> ans;
        vector<int> vis(nums.size(),0);
        solve(list,vis,ans,nums);
        return ans;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}