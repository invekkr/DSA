// https://leetcode.com/problems/pascals-triangle/description/?envType=problem-list-v2&envId=array

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> li;
        int n = numRows;
        for(int i=0;i<n;i++){
            int val = 1;
            vector<int> li;

            for(int j=0;j<=i;j++){
                li.push_back(val);
                val = val*(i-j)/(j+1);

            }
            ans.push_back(li);
        }

        return ans;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
