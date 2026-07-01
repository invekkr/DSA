// https://leetcode.com/problems/n-queens/description/
#include <bits/stdc++.h>
using namespace std;
class optimizedSolution {
public:
    void solve(int col, vector<string> &board, vector<vector<string>> &ans, 
        vector<int> &leftRow,vector<int> &lowerDiagonal, vector<int> &upperDiagonal, int n){
            if(col==n){
                ans.push_back(board);
                return;
            }

            for(int row = 0;row<n; row++){
                // valid arrangment
                if(leftRow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+(row-col)]==0){
                    board[row][col] = 'Q';

                    leftRow[row]=1;
                    lowerDiagonal[row+col]=1;
                    upperDiagonal[n-1+(row-col)]=1;

                    solve(col+1, board,ans,leftRow,lowerDiagonal,upperDiagonal,n);

                // backtrack
                    board[row][col] = '.';
                    leftRow[row]=0;
                    lowerDiagonal[row+col]=0;
                    upperDiagonal[n-1+(row-col)]=0;

                }
            }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));

        vector<int> leftRow(n,0);
        vector<int> lowerDiagonal(2*n-1,0);
        vector<int> upperDiagonal(2*n-1,0);

        solve(0,board,ans,leftRow,lowerDiagonal,upperDiagonal,n);
        return ans;
    }
};
class Solution {
public:
    bool isSafe(int row, int col, vector<string> &board, int n){
        // left side 
        int r = row;
        int c = col;

        while(c>=0){
            if(board[r][c]=='Q')
                return false;
            c--;
        }

        // upper left diagonal 
        r = row;
        c = col;

        while(r>=0 && c>=0){
            if(board[r][c]=='Q'){
                return false;
            }
            r--;
            c--;
        }

        // lower left diagonal

        r = row;
        c = col;

        while(r<n && c>=0){
            if(board[r][c]=='Q'){
                return false;
            }
            r++;
            c--;
        }
        return true;
    }
    void solve(int col,  vector<string> &board, vector<vector<string>> &ans, int n){
        if(col==n){
            ans.push_back(board);
            return;
        }

        for(int row=0;row<n;row++){
            if(isSafe(row, col, board, n)){
                board[row][col]='Q';
                solve(col+1,board,ans,n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));
        solve(0,board,ans,n);
        return ans;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}