// https://leetcode.com/problems/surrounded-regions/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        queue<pair<int,int>> q;

        // pushing along coloumn
        for(int i=0;i<m;i++){
            if(board[i][0]=='O'){
                q.push({i,0});
                board[i][0]='#';
            }
            if(board[i][n-1]=='O'){
                q.push({i,n-1});
                board[i][n-1]='#';
            }
        }

        // pushing along row
        for(int i=0;i<n;i++){
            if(board[0][i]=='O'){
                q.push({0,i});
                board[0][i]='#';
            }
            if(board[m-1][i]=='O'){
                q.push({m-1,i});
                board[m-1][i]='#';
            }
        }

        int dr[4] = {1,-1,0,0};
        int dc[4] = {0,0,1,-1};

        // BFS

        while(!q.empty()){
            auto [r,c] = q.front();
            q.pop();

            for(int i=0;i<4;i++){
                int cr = r+dr[i];
                int cc = c+dc[i];

                if(cr>=0 && cc>=0 && cr<m && cc<n && board[cr][cc]=='O'){
                    q.push({cr,cc});
                    board[cr][cc]='#';
                }
            }
        }

        // Now Flipping unsafe region 

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='#'){
                    board[i][j]='O';
                }
                else if(board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
    }
};
void main(){
    
}