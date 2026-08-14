// https://leetcode.com/problems/subsets/

#include <bits/stdc++.h>
using namespace std;
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
    vector<int> a = {1, 1, 2};
    vector<vector<int>> ans;
    ans = subsets(a);
    printVectorOfVector(ans);
    return 0;
}