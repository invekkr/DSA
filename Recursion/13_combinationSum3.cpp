// https://leetcode.com/problems/combination-sum-iii/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void helper(int idx, vector<vector<int>> &ans, vector<int> &li, int k, int n){
        if(n==0 && k==0){
            ans.push_back(li);
            return;
        }
        if(k==0 || n<0) return;
        // from 1 to 9
        for(int i=idx;i<=9;i++){
            li.push_back(i);
            helper(i+1,ans,li,k-1,n-i);
            li.pop_back();
        }

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> li;
        helper(1,ans,li,k,n);
        return ans;
    }
};
int main(){

return 0;
}