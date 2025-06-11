// https://leetcode.com/problems/move-zeroes/description/

#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i;
        for(i = 0;i<n;i++){
            if(nums[i]==0){
                break;
            }
        }
        if (i == n) return;
        for(int j = i+1;j<n;j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
    }
int main(){

return 0;
}