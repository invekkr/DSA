// https://leetcode.com/problems/course-schedule-ii/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<int> indegree(n,0);
        vector<vector<int>>list(n);

        for(auto &e : prerequisites){
            int u = e[1];
            int v = e[0];
            list[u].push_back(v);
            indegree[v]++;
        }

        

        queue<int>q;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(indegree[i]==0)
                q.push(i);
        }

        while(!q.empty()){
            int node = q.front();
            q.pop();

            ans.push_back(node);

            for(auto ngh:list[node]){
                indegree[ngh]--;
                if(indegree[ngh]==0)
                    q.push(ngh);
            }
        }
        if(ans.size() != n) return {};
        return ans;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}