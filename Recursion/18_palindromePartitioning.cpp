// https://leetcode.com/problems/palindrome-partitioning/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // to check if that part of the substr is palindrome or not
    bool isValid(string str, int l, int h){
        while(l<=h){
            if(str[l]==str[h]){
                l++;
                h--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    void solve(int idx, vector<string> &li, vector<vector<string>> &ans,string &s){
        
        if(idx==s.size()){
            ans.push_back(li);
            return;
        }

        // we will select elem one by one
        for(int i=idx;i<s.size();i++){
            if(isValid(s,idx,i)){
                // if the partition is valid then we push that part in the temp list
                li.push_back(s.substr(idx,i-idx+1));
                solve(i+1,li,ans,s);
                li.pop_back();
            }
        }

        return;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> li;
        solve(0,li,ans,s);
        return ans;

    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}