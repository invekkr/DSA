#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int l=0,h=arr.size()-1;
        int ans = arr.size();
        while(l<=h){
            int mid = l+(h-l)/2;
            
            if(arr[mid]>target){
                ans = mid;
                h=mid-1;
            }
            else{
                l = mid+1;
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