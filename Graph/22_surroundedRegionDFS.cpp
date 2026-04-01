// https://leetcode.com/problems/surrounded-regions/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(vector<vector<char>>& board, int r, int c){
        // check for cases
        int m = board.size();
        int n = board[0].size();
        if(r<0 || c<0 || r>=m || c>=n || board[r][c]!='O')
            return;

        // mark safe
        board[r][c] = '#';
        dfs(board,r-1,c);
        dfs(board,r+1,c);
        dfs(board,r,c-1);
        dfs(board,r,c+1);
    }
    void solve(vector<vector<char>>& board) {
        
        int m = board.size();
        int n = board[0].size();

    // Row boundary
        for(int i=0;i<n;i++){
            if(board[0][i]=='O')
                dfs(board,0,i);
            if(board[m-1][i]=='O')
                dfs(board,m-1,i);
        }

    // Coloumn boundary
        for(int i=0;i<m;i++){
            if(board[i][0]=='O')
                dfs(board,i,0);
            if(board[i][n-1]=='O')
                dfs(board,i,n-1);
        }

    // find and replace

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='#')
                    board[i][j]='O';
                else if(board[i][j]=='O')
                    board[i][j]='X';
            }
        }

    }
};
void main(){
    
}