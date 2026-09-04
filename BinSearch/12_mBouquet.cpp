// http://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int>& arr, int m, int k, int day){
        int n = arr.size();
        int count = 0; // to check if we have reached the flower count(adjcant) in a bouq >=k
        int totalBouq = 0;

        for(int i=0;i<n;i++){
            if(arr[i]<=day){
                count++; // the blooming day is less than our days
                if(count==k){   // total number of flower in a bouq reached
                    totalBouq++;
                    count=0;
                }
            }
            else{   // flower will take more time to bloom than our day || there was bouq in making but the next flower in bouq is taking for days to bloom
                count = 0;
            }
        }
        return totalBouq>=m; // checking we are able to make desired bouq or not
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1LL*m*k>bloomDay.size())
            return -1;

        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        int ans;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(check(bloomDay,m,k,mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
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
