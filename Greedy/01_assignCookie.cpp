// https://leetcode.com/problems/assign-cookies/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        int i=0,j=0,ans=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i]){
                i++;
                j++;
                ans++;
            }
            else
                j++;

        }
        return ans;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
