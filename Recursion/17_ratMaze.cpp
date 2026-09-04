// https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void solve(int row, int col, vector<vector<int>>& maze, vector<vector<int>>& vis,
    int dr[], int dc[], string &path, string &dir, int n, vector<string> &ans){
        
        // base case when we reach the exit point
        if(row==n-1 && col==n-1){
            ans.push_back(path);
            return;
        }
        
        // when we are at a postion we will traverse in all the direction to find the solution 
        for(int i=0;i<4;i++){
            int r = row + dr[i];
            int c = col + dc[i];
            
            // now we will check if we are not at a correct postion (i.e, checking that we are not at invalid post)
            
            if(r>=0 && r<n && c>=0 && c<n && maze[r][c] && !vis[r][c]){
                vis[r][c] = 1;
                path.push_back(dir[i]);
                
                // recurse
                solve(r,c,maze,vis,dr,dc,path,dir,n,ans);
                
                // backtrack
                vis[r][c]=0;
                path.pop_back();
                
            }
        }
        return;
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n = maze.size();
        vector<string> ans;
        
        vector<vector<int>> vis(n,vector<int>(n,0));
        
        string dir = "DLRU";
        string path = "";
        
        int dr[4] = {1,0,0,-1};
        int dc[4] = {0,-1,1,0};
        
        vis[0][0] = 1;
        
        if(maze[0][0]==1){
            solve(0,0,maze,vis,dr,dc,path,dir,n,ans);
        }
        
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}