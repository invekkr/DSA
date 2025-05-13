#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target,int n) {
    int low = 0, high = nums.size() - 1, mid,ans =n;

    while (low < high) {
        mid = low + (high - low) / 2; 

        if (nums[mid] > target) {
            ans =  mid;
            high = mid-1;
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        
    }
    return ans;
}

int main() {
    vector<int> nums = {3, 5, 8,9, 15, 19};
    for(auto it : nums){
        cout<<it<<" ";
    }
    cout<<endl;
    int ans = search(nums, 9,nums.size());  // target = 9
   
    // int lb = upper_bound(nums.begin(),nums.end(),8) - nums.begin();
    cout << "ans is "<<ans;; 
    return 0;
}
