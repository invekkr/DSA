#include <bits/stdc++.h>
using namespace std;

void bfs(int row, int col, vector<vector<int>>& grid,
         vector<vector<int>>& vis) {

    int n = grid.size();
    int m = grid[0].size();

    queue<pair<int, int>> q;

    q.push({row, col});
    vis[row][col] = 1;

    int dr[] = {-1, 0, 1, 0};
    int dc[] = {0, 1, 0, -1};

    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        cout << "(" << r << "," << c << ") ";

        for (int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr >= 0 && nr < n &&
                nc >= 0 && nc < m &&
                grid[nr][nc] == 1 &&
                !vis[nr][nc]) {

                vis[nr][nc] = 1;
                q.push({nr, nc});
            }
        }
    }
}

int main() {
    vector<vector<int>> grid = {
        {0, 1, 0, 1, 0},
        {1, 0, 1, 0, 0},
        {0, 1, 0, 1, 1},
        {1, 0, 1, 0, 1},
        {0, 0, 1, 1, 0}
    };

    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> vis(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if (grid[i][j] == 1 && !vis[i][j]) {
                bfs(i, j, grid, vis);
            }
        }
    }

    return 0;
}