// https://leetcode.com/problems/climbing-stairs/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(int n){

        if(n<=1)
            return 1;
        int p1 = 1;
        int p2 = 1;
        int curr ;
        for(int i=2;i<=n;i++){
            curr = p1+p2;
            p1 = p2;
            p2 = curr;
        }
        return curr;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return solve(n);
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}