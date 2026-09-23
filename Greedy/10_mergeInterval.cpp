// https://leetcode.com/problems/merge-intervals/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());

        int lastEnd = -1;
        for(int i=0;i<n;i++){
            int start = intervals[i][0];
            int end = intervals[i][1];

            if(i==0){
                ans.push_back(intervals[i]);
                lastEnd = end;
            }

            else if(start>lastEnd){
                ans.push_back(intervals[i]);
                lastEnd = end;
            }
            else if(start<=lastEnd){
                lastEnd = max(lastEnd,end);
                ans.back()[1] = lastEnd;
            }
        }
        return ans;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}