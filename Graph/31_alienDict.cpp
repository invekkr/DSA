// https://www.geeksforgeeks.org/problems/alien-dictionary/1
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> topoBFS(vector<vector<int>>&graph,vector<int>&present){
        int n = graph.size();
        vector<int>num,indegree(n,0);
        
        for(int i=0;i<n;i++){
            for(auto it:graph[i])
                indegree[it]++;
        }
        
        queue<int>q;
        for(int i=0;i<26;i++){
            if(!indegree[i] && present[i])
                q.push(i);
        }
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            num.push_back(node);
            
            for(auto ngh:graph[node]){
                indegree[ngh]--;
                if(!indegree[ngh])
                    q.push(ngh);
            }
        }
        return num;
        
    }
    
    string findOrder(vector<string> &words) {
        
        // first we will change the given Dict(words) to graph to find out the relation
        
        int n=words.size();
        vector<vector<int>> graph(26);
        vector<int> present(26);
        
        // we will mark the nodes(char) as present
        for(auto &w:words){
            for(auto ch:w)
                present[ch-'a']=1;
        }
        
        // we will push char in nodes and make it a graph
        for(int i=0;i<n-1;i++){
            string s1 = words[i];
            string s2 = words[i+1];
            bool found = false;
            int len = min(s1.size(),s2.size());
            for(int j=0;j<len;j++){
                if(s1[j]!=s2[j]){
                    found = true;
                    graph[s1[j]-'a'].push_back(s2[j]-'a');
                    break;
                }
            }
            if(!found && s1.size()>s2.size())   return "";
            
        }
        
        vector<int> num = topoBFS(graph,present);
        //check if topo is valid or not 
        int total = 0;
        for(int i=0;i<26;i++){
            if(present[i])
                total++;
        }
        if(num.size()!=total)   return "";
        
        string ans = "";
        for(auto n:num){
            ans+=(n+'a');
        }
        return ans;
        
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}