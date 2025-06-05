#include <bits/stdc++.h>
using namespace std;
void comb(int i, vector<vector<int>>&ans, vector<int>&li, vector<int>&arr, int t){
        if(i==arr.size()){
            if(t==0){
                ans.push_back(li);
            }return;
        }
        if(arr[i]<=t){
            li.push_back(arr[i]);
            comb(i+1,ans,li,arr,t-arr[i]);
            li.pop_back();
        }
        comb(i+1,ans,li,arr,t);
    }
vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> li;
    comb(0, ans, li, candidates, target);
    sort(ans.begin(), ans.end()); // Optional but good for consistent ordering

    set<vector<int>> uniqueRows;
    for (auto row : ans)
    {
        sort(row.begin(), row.end()); // ✅ Sort each combination before inserting into the set
        uniqueRows.insert(row);
    }

    vector<vector<int>> result(uniqueRows.begin(), uniqueRows.end());
    return result;
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
vector<int> a = {10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>> ans;
    ans = combinationSum2(a, target);
    printVectorOfVector(ans);
    return 0;
}