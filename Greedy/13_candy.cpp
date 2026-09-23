// https://leetcode.com/problems/candy/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        int ans = 1,up=0,down=0,peak=0;
    
        for(int i=1;i<n;i++){
            // up hill
            if(ratings[i-1]<ratings[i]){
                up++;
                ans+=up+1;
                peak = up;
                // reseting down
                down = 0;
            }
            
            // same height
            else if(ratings[i-1]==ratings[i]){
                ans++;
                up=down=peak=0;
            }

            // down slope
            else if(ratings[i-1]>ratings[i]){
                down++;
                ans+=down;

                // reset up
                up = 0;

                // this means the peak would have been larger than what it is now because we didn't check from left side so as we keep going down and the val of down is greter than peak we will add that many times
                if(down>peak)   
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