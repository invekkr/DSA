#include <bits/stdc++.h>
using namespace std;
void bfs(int r, int c, vector<vector<int>> &grid, vector<vector<int>> &vis)
{
    int m = grid.size();
    int n = grid[0].size();

    queue<pair<int, int>> q;

    q.push({r, c});
    vis[r][c] = 1;

    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};

    while (!q.empty())
    {
        auto temp = q.front();
        q.pop();

        int r = temp.first;
        int c = temp.second;

        cout << "(" << r << "," << c << ") ";

        for (int i = 0; i < 4; i++)
        {
            int cr = r + dr[i];
            int cc = c + dc[i];

            if (cr >= 0 && cr < m && cc >= 0 && cc < n && grid[cr][cc] == 1 && !vis[cr][cc])
            {
                vis[cr][cc] = 1;
                q.push({cr,cc});
            }
        }
    }
}
int main()
{
    vector<vector<int>> grid = {
        {1, 1, 0, 1, 1, 1},
        {1, 1, 0, 0, 0, 0},
        {1, 0, 0, 1, 1, 1},
        {1, 1, 0, 1, 0, 0}};

    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>> vis(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1 && !vis[i][j])
            {
                bfs(i, j, grid, vis);
                cout<<endl;
            }
        }
    }

    return 0;
}
