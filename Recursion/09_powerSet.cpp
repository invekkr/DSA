// https://leetcode.com/problems/subsets/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void helper(int idx, vector<int> &nums, vector<int> &list,vector<vector<int>> &ans){
        if(idx==nums.size()){
            ans.push_back(list);
            return;
        }

        //take the element at idx
        list.push_back(nums[idx]);
        helper(idx+1,nums,list,ans);

        // backtrack : i.e, remove the element last added to make it empty at that position
        list.pop_back();

        // not take the element at that postion
        helper(idx+1,nums,list,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> list;
        helper(0,nums,list,ans);
        return ans;
    }
};
void subs(int ind, vector<vector<int>> &ans, vector<int> &li, vector<int> &nums)
{
    ans.push_back(li);

    for (int i = ind; i < nums.size(); i++)
    {
        li.push_back(nums[i]);
        subs(i + 1, ans, li, nums);
        li.pop_back();
    }
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> li;
    subs(0, ans, li, nums);
    return ans;
}

void printVectorOfVector(const vector<vector<int>> &vec)
{
    for (const auto &inner : vec)
    {
        cout << "[ ";
        for (int num : inner)
        {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
}
int main()
{
    vector<int> a = {1, 2, 3};
    vector<vector<int>> ans;
    ans = subsets(a);
    printVectorOfVector(ans);
    return 0;
}