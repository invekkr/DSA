// https://leetcode.com/problems/non-overlapping-intervals/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans = 0;
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
        return a[1] < b[1];});

        int lastEnd = INT_MIN;
        for(auto interval : intervals){
            int start=interval[0];
                if(start>=lastEnd){
                    lastEnd = interval[1];
                }
                else{
                    ans++;
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
