#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        int l=0,h=x;
        int ans;
        while(l<=h){
            int mid = l+(h-l)/2;

            if(1LL*mid*mid <= x){
                l=mid+1;
                ans = mid;
            }
            
            else
                h=mid-1;
        }
        return ans;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}