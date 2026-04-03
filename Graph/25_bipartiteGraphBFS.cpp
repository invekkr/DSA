// https://leetcode.com/problems/is-graph-bipartite/description/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isBipartite(vector<vector<int>> &graph)
    {
        int n = graph.size();
        vector<int> col(n, -1);

        for (int i = 0; i < n; i++)
        {
            if (col[i] == -1)
            {
                queue<int> q;
                q.push(i);
                col[i] = 1;
                while (!q.empty())
                {
                    int node = q.front();
                    q.pop();

                    for (auto ngh : graph[node])
                    {
                        if (col[ngh] == -1)
                        {
                            col[ngh] = 1 - col[node];
                            q.push(ngh);
                        }
                        else if (col[ngh] == col[node])
                            return false;
                    }
                }
            }
        }

        return true;
    }
};
void main()
{
}