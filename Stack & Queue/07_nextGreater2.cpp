// https://leetcode.com/problems/next-greater-element-ii/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n,-1);
        stack<int> st;
        

        for(int i=2*n-1;i>=0;i--){
            int curr = nums[i % n];

            while(!st.empty() && curr>=st.top()){
                st.pop();
            }
            if(!st.empty())
                nge[i%n] = st.top();

            st.push(curr);
        }

        return nge;

    }
};
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans;
        stack<int> st;
        vector<int> arr=nums;

        for(int i=0;i<n;i++){
            arr.push_back(nums[i]);
        }
        
        vector<int> nge(2*n ,-1);
        int m = 2*n;

        for(int i=m-1;i>=0;i--){
            while(!st.empty() && arr[i]>=st.top())
                st.pop();

            if(!st.empty())
                nge[i] = st.top();
            
            st.push(arr[i]);
        }

        for(int i=0;i<n;i++){
            ans.push_back(nge[i]);
        }
        return ans;

    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
