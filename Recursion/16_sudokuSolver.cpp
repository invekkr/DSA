// https://leetcode.com/problems/sudoku-solver/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSafe(int row, int col, vector<vector<char>>& board, char c){
        for(int i=0;i<9;i++){
            if(board[row][i]==c)
                return false;
            
            if(board[i][col]==c)
                return false;
        }

        int startRow = (row/3)*3;
        int startCol = (col/3)*3;

        for(int i=startRow;i<startRow+3;i++){
            for(int j=startCol;j<startCol+3;j++){
                if(board[i][j]==c)
                    return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board){
        
        for(int row=0;row<9;row++){
            for(int col=0;col<9;col++){
                // check for empty places
                if(board[row][col]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isSafe(row,col,board,c)){
                        board[row][col]=c;
                        
                        bool nextSoln = solve(board);
                        if(nextSoln==true)
                            return true;
                        
                        else
                            board[row][col]='.';
                        }
                    }
                    return false;
                }
                
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}