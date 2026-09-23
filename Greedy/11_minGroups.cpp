// https://leetcode.com/problems/divide-intervals-into-minimum-number-of-groups/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> start,finish;
        int n=intervals.size();
        for(auto it : intervals){
            start.push_back(it[0]);
            finish.push_back(it[1]);
        }

        sort(start.begin(),start.end());
        sort(finish.begin(),finish.end());

        int i=0,j=0,g=0,ans=0;

        while(i<n){
            if(start[i]<=finish[j]){
                i++;
                g++;
                ans = max(g,ans);
            }
            else{
                g--;
                j++;
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
