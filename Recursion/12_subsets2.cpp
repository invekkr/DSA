// https://leetcode.com/problems/subsets-ii/description/
#include <bits/stdc++.h>
using namespace std;
void subsets(int ind, vector<vector<int>> &ans, vector<int> &li, vector<int> &nums)
{
    // for (auto it = li.begin(); it < li.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;
    ans.push_back(li);
    for (int i = ind; i < nums.size(); i++)
    {
        if (i != ind && nums[i] == nums[i - 1])
            continue;
        li.push_back(nums[i]);
        subsets(i + 1, ans, li, nums);
        li.pop_back();
    }
}
vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> li;
    sort(nums.begin(), nums.end());
    subsets(0, ans, li, nums);
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
    vector<int> nums = {1,1,2,2,2};
    for (auto it = nums.begin(); it < nums.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    vector<vector<int>> ans = subsetsWithDup(nums);
    printVectorOfVector(ans);

    return 0;
}