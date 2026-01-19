// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int n = arr.size(),l=0,r=0;
        vector<int> ans;
        queue<int> q;
        
        // will loop the right side of the window till n
        
        while(r<n){
            // will check the incoming elems if they are neg
            if(arr[r]<0){
                q.push(r);  // we are only pusing the indices of neg val
            }
            
            // will check if the win size == k ? r++ : nothing
            if(r-l+1<k) r++;
            
            // now, will check if wind size == k ? : will push out arr[l] & also update ans
            else if(r-l+1==k){
                // if q is not empty (i.e, it contains neg, so will push that in ans)
                if(!q.empty())
                    ans.push_back(arr[q.front()]);
                
                // if q is empty that means only pos elems in the window
                else if(q.empty())
                    ans.push_back(0);
                    
                // now as the window size == k, will remove the indice from q, if that indice is == l
                if(!q.empty() && q.front()==l)
                    q.pop();
                    
                // as the window size == k, incr l & r
                l++;
                r++;
    
            }
        }
        return ans;
        
    }
};
int main(){
    return 0;
}
