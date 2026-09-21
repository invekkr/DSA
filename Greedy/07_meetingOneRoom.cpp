// https://www.geeksforgeeks.org/problems/maximum-meetings-in-one-room/1
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> maxMeetings(vector<int> &s, vector<int> &f) {
        
        // create DS to store the start, end and meeting number in order
        vector<tuple<int,int,int>> meets;
        for(int i=0;i<s.size();i++){
            meets.push_back({f[i],i+1,s[i]});
        }
        
        // sort meet by end time
        sort(meets.begin(),meets.end());
        
        // we need an answer array 
        vector<int> ans;
        int lastEnd = -1;
        
        for(auto meet : meets){
            int end = get<0> (meet);
            int start = get<2> (meet);
            int no = get<1> (meet);
            
            // check if overlaps
            if(start>lastEnd){
                lastEnd = end;
                ans.push_back(no);
            }
            
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
