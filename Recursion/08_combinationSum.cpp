// https://leetcode.com/problems/combination-sum/
#include <bits/stdc++.h>
using namespace std;

void combination(int i, vector<int> li, vector<vector<int>> &ans, vector<int> &arr, int t)
{
    if (i == arr.size())
    {
        if (t == 0)
        {
            ans.push_back(li);
        }
        return;
    }
    if (arr[i] <= t)
    {
        li.push_back(arr[i]);
        combination(i, li, ans, arr, t - arr[i]);
        li.pop_back();
    }
    combination(i + 1, li, ans, arr, t);
}
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> li;
    combination(0, li, ans, candidates, target);
    return ans;
}
void printVectorOfVector(const vector<vector<int>>& vec) {
    for (const auto& inner : vec) {
        cout << "[ ";
        for (int num : inner) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
}
int main()
{
    vector<int> a = {2, 3};
    int target = 6;
    vector<vector<int>> ans;
    ans = combinationSum(a, target);
    printVectorOfVector(ans);
    return 0;
}