// https://leetcode.com/problems/insert-interval/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>> ans;
        int n = intervals.size();
        int i = 0;

        // case 1
        while(i<n && intervals[i][1]<newInterval[0]){
            ans.push_back(intervals[i]);
            i++;
        }

        // case 2
        while(i<n && intervals[i][0]<=newInterval[1]){
            newInterval[0] = min(newInterval[0],intervals[i][0]);
            newInterval[1] = max(newInterval[1],intervals[i][1]);
            i++;
        }
        // add new new to answer
        ans.push_back(newInterval);

        // case 3 
        while(i<n && intervals[i][1]>newInterval[0]){
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
