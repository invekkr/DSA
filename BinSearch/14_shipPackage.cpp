// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int> &arr, int days, int capacity){
        int sum = 0;
        int cnt = 1;

        for(auto a:arr){
            if(sum+a<=capacity){
                sum+=a;
            }
            else{
                sum=a;
                cnt++;
            }
        }

        return cnt<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = *max_element(weights.begin(),weights.end());

        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=weights[i];
        }

        int high = sum;
        int ans;
        while(low<=high){
            int mid = low+(high-low)/2;

            bool val = check(weights,days,mid);
            if(val){
                ans = mid;
                high=mid-1;
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