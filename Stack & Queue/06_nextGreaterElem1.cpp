// https://leetcode.com/problems/next-greater-element-i/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> st;
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> greaterArr(n2,0);
        vector<int> ans;
        
        for(int i=n2-1;i>=0;i--){
            if(st.empty()){
                greaterArr[i] = -1;
                st.push(nums2[i]);
            }

            else{
                if(nums2[i]<st.top()){
                    greaterArr[i] = st.top();
                    st.push(nums2[i]);
                }
                else{
                    while(!st.empty() && nums2[i]>=st.top()){
                        st.pop();
                    }

                    if(st.empty()){
                        greaterArr[i] = -1;
                    }
                    else{
                        greaterArr[i] = st.top();
                    }

                    st.push(nums2[i]);
                    
                }
            }
        }

        map<int,int> mp;

        for(int i=0;i<n2;i++){
            mp[nums2[i]] = greaterArr[i]; 
        }

        for(int i=0;i<n1;i++){
            ans.push_back(mp[nums1[i]]);
        }

        return ans;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}