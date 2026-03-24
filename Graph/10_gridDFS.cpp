#include <bits/stdc++.h>
using namespace std;
void dfs(int r, int c, vector<vector<int>> &grid, vector<vector<int>> &vis)
{
    int n = grid.size();
    int m = grid[0].size();
    vis[r][c] = 1;
    cout << "(" << r << "," << c << ") ";
    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++)
    {
        int cr = r + dr[i];
        int cc = c + dc[i];

        if (cr >= 0 && cr < n && cc >= 0 && cc < m && grid[cr][cc] == 1 && !vis[cr][cc])
        {
            dfs(cr, cc, grid, vis);
        }
    }
}
int main()
{

    vector<vector<int>> grid = {
        {1, 1, 0},
        {1, 0, 1},
        {0, 1, 1}};

    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> vis(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1 && !vis[i][j])
            {
                dfs(i, j, grid, vis);
            }
        }
    }
    return 0;
}
