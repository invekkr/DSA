// https://leetcode.com/problems/rotate-array/description/

#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;  // Handle k > n
    reverse(nums.begin(), nums.end());           
    reverse(nums.begin(), nums.begin() + k);     
    reverse(nums.begin() + k, nums.end()); 
    }
int main(){
    
return 0;
}