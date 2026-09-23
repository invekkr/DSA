// https://www.geeksforgeeks.org/problems/shortest-job-first/1
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int solve(vector<int>& bt) {
        // code here
        sort(bt.begin(),bt.end());
        int twt=0,ct=0;
        for(int i=0;i<bt.size()-1;i++){
            ct += bt[i];
            twt+=ct;
            
        }
        return twt/bt.size();
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}