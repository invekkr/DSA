// https://leetcode.com/problems/combination-sum-ii/description/

#include <bits/stdc++.h>
using namespace std;
void comb(int ind, vector<vector<int>> &ans, vector<int> &li, vector<int> &arr, int t)
{
    if (t == 0)
    {
        ans.push_back(li);
        return;
    }
    for (int i = ind; i < arr.size(); i++)
    {
        if (i > ind && arr[i] == arr[i - 1])
            continue; // skips dupes
        if (arr[i] > t)
            break;
        li.push_back(arr[i]);
        comb(i + 1, ans, li, arr, t - arr[i]);
        li.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> li;
    comb(0, ans, li, candidates, target);
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
    vector<int> a = {1, 2, 1, 3, 1};
    int target = 3;
    vector<vector<int>> ans;
    ans = combinationSum2(a, target);
    printVectorOfVector(ans);
    return 0;
}