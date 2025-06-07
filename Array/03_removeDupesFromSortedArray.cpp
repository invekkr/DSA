// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=1;
        while(j<n){
            if(nums[i]==nums[j]){
                j++;
            }
            else if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;
                j++;
            }
        }
        return i+1;
    }
int main(){
    vector<int> arr = {1,2,2,3,3,4};
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
    int ans = removeDuplicates(arr);
    cout<<ans<<endl;
    for(auto it:arr){
        cout<<it<<" ";
    }
return 0;
}