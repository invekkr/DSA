// https://leetcode.com/problems/course-schedule/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int V = numCourses;
        vector<vector<int>> list(V);
        vector<int> indeg(V,0);

        // adj list and indeg array

        for(auto &it: prerequisites){
            int u = it[1];
            int v = it[0];

            list[u].push_back(v);
            indeg[v]++;
        }

        queue<int> q;
        //pushing node in Q with 0 indegree
        for(int i=0;i<V;i++){
            if(indeg[i]==0){
                q.push(i);
            }
        }

        int count = 0;

        while(!q.empty()){
            int node = q.front();
            q.pop();

            count++;

            for(auto ngh:list[node]){
                indeg[ngh]--;
                if(indeg[ngh]==0){
                    q.push(ngh);
                }
            }
        }
        return count == V;

    }
};
void main(){

}