// powerset using bit masking
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;

        int subsetsCount = 1 << nums.size();

        for(int mask = 0;mask < subsetsCount;mask++){
            vector<int> subset;

            for(int i=0;i<nums.size();i++){
                if(mask & (1<<i))
                    subset.push_back(nums[i]);
            }

            ans.push_back(subset);
        }

        return ans;

    }
};
void main(){

}
