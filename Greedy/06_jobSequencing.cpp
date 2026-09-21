
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        
        // we get the maxDL to get our sequence 
        int maxDL  = *max_element(deadline.begin(),deadline.end());
        // we create a vector array to store the sequence
        vector<int> jobSeq(maxDL+1,-1);
        
        // we need a DS to store our Profit and Deadline together so get our ans
        vector<pair<int,int>> jobs;
        
        for(int i=0;i<profit.size();i++)
            jobs.push_back({profit[i],deadline[i]});
        
        // we will sort jobs ac to profit
        sort(jobs.begin(),jobs.end(),greater<pair<int,int>>());
        
        
        int totalProfit = 0;
        int totalJobs = 0;
        
        for(auto job : jobs){
            int p = job.first;
            int j = job.second;
            
            for(int i=j;i>=1;i--){
                if(jobSeq[i]==-1){
                    jobSeq[i]=p;
                    totalProfit+=p;
                    totalJobs++;
                    break;
                }
                
            }
        }
        return{totalJobs,totalProfit};
        
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}