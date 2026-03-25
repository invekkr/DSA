#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(vector<vector<int>> &image, vector<vector<int>> &vis, int r, int c, int col, int intCol){
        int m = image.size();
        int n = image[0].size();

        vis[r][c] = 1;
        image[r][c] = col;
        int dr[4] = {-1,1,0,0}; 
        int dc[4] = {0,0,-1,1}; 

        for(int i=0;i<4;i++){
            int cr = r + dr[i];
            int cc = c + dc[i];

            if (cr >= 0 && cr < m && cc >= 0 && cc < n && image[cr][cc]==intCol && !vis[cr][cc])
            {
                
                dfs(image,vis,cr,cc,col,intCol);
            }
        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        int initialColour = image[sr][sc];
        vector<vector<int>> vis(m,vector<int>(n,0));

        dfs(image, vis, sr, sc, color, initialColour);

        return image;

    }
};
void main(){

}