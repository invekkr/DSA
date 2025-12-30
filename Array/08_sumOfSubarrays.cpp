// https://www.geeksforgeeks.org/problems/sum-of-subarrays2229/1
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        int ans = 0;
        for(int i=0;i<arr.size();i++){
            ans+=arr[i]*(i+1)*(arr.size()-i);
        }
        return ans;
    }
};
int main(){

return 0;
}