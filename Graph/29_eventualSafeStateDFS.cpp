// https://leetcode.com/problems/find-eventual-safe-states/description/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool dfs(int node, vector<int> &state, vector<vector<int>> &graph)
    {

        if (state[node] == 1)
            return false; // cycle exist
        if (state[node] == 2)
            return true; // safe state
        state[node] = 1;

        for (auto ngh : graph[node])
        {
            if (!dfs(ngh, state, graph))
            {
                return false;
            }
        }

        state[node] = 2;
        return true;
    }
    vector<int> eventualSafeNodes(vector<vector<int>> &graph)
    {
        int n = graph.size();
        vector<int> ans;
        vector<int> state(n, 0);

        for (int i = 0; i < n; i++)
        {
            if (state[i] != 1)
            {
                if (dfs(i, state, graph))
                    ans.push_back(i);
            }
        }
        return ans;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}