// https://www.geeksforgeeks.org/problems/number-of-distinct-islands/1

class Solution {
  public:
    int countDistinctIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        set<vector<pair<int,int>>> st;
        
        int dr[4] = {-1,1,0,0};
        int dc[4] = {0,0,-1,1};
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='L' && !vis[i][j]){
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    vis[i][j]=1;
                    
                    vector<pair<int,int>> shape;
                    // base row & col
                    int br = i;
                    int bc = j;
                    while(!q.empty()){
                        auto[r,c] = q.front();
                        q.pop();
                        shape.push_back({br-r,bc-c});
                        
                        for(int i=0;i<4;i++){
                            int cr = r+dr[i];
                            int cc = c+dc[i];
                            
                            if(cr>=0 && cr<n && cc>=0 && cc<m && !vis[cr][cc] && grid[cr][cc]=='L'){
                                vis[cr][cc] = 1;
                                q.push({cr,cc});
                                
                            }
                        }
                    }
                    st.insert(shape);
                }
            }
        }
        return st.size();
    }
};
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}