// https://www.geeksforgeeks.org/problems/immediate-smaller-element1142/1

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        
        
        stack<int> st;
        int n = arr.size();
        vector<int> ans(n,-1);
        
        for(int i=n-1;i>=0;i--){
            
            while(!st.empty() && arr[i]<=st.top()){
                st.pop();
            }
            
            // (arr[i]>st.top)
            if(!st.empty())
                ans[i] = st.top();
            
            st.push(arr[i]);
        }
        
        return ans;
        
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}