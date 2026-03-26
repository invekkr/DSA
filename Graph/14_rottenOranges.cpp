// https://leetcode.com/problems/rotting-oranges/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int fresh = 0;
        queue<pair<int,int>> q;

        // traverse whole grid for rotten and fresh 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2)
                    q.push({i,j});
                if(grid[i][j]==1)
                    fresh++;
            }
        }

        // MultiSource BFS to rot oranges

        int time = 0;
        int dr[4] = {-1,1,0,0};
        int dc[4] = {0,0,-1,1};

        while(!q.empty() && fresh>0){
            int size = q.size();

            for(int i=0;i<size;i++){
                auto temp = q.front();
                q.pop();

                int r = temp.first;
                int c = temp.second;

                for(int i=0;i<4;i++){
                    int cr = r + dr[i];
                    int cc = c + dc[i];

                    if(cr >= 0 && cc >= 0 && cr < m && cc < n && grid[cr][cc] == 1){
                        grid[cr][cc] = 2;
                        q.push({cr,cc});
                        fresh--;
                    }
                }

            }
            time++;
        }
        return fresh > 0 ? -1 : time;
    }
};
void main (){

}