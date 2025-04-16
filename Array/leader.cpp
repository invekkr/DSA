#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,2,5,3,1,2};
    int n = nums.size();
    for(auto it : nums){
        cout<<it<<" ";
    }
    cout<<endl;

    vector<int>ans;
    int maxi = INT_MIN;
    for(int i = n-1;i>=0;i--){
        
        if(nums[i]>maxi){
            ans.push_back(nums[i]);
            maxi = nums[i];
        }
    }
    reverse(ans.begin(), ans.end());
    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<endl;


return 0;
}