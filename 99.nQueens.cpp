// LeetCode [51. N-Queens] {Hard}
/*
Problem Statement:
The N-Queens puzzle is the problem of placing `n` queens on an `n x n` chessboard 
such that no two queens attack each other.

You must return all distinct solutions to the N-Queens puzzle.

Each solution contains a distinct board configuration of the N-Queens' placement,
where 'Q' and '.' both indicate a queen and an empty space respectively.

Example:
Input: n = 4
Output: 
[
 [".Q..",
  "...Q",
  "Q...",
  "..Q."],

 ["..Q.",
  "Q...",
  "...Q",
  ".Q.."]
]

Time Complexity: O(N!)  
Space Complexity: O(N^2)
*/

#include <iostream>
using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n){
    
    // horizontal
    for(int j=0; j<n; j++){
        if(board[row][j] == 'Q'){
            return false;
        }
    }

    // vertical
    for(int i=0; i<n; i++){
        if(board[i][col] == 'Q'){
            return false;
        }
    }

    // left diagonal
    for(int i=row,j=col; i>=0 && j>=0; i--,j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }

    // right diagonal
    for(int i=row,j=col; i>=0 && j<n; i--,j++){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    return true;
}

void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans){
    if(row == n){
        ans.push_back({board});
        return;
    }

    for(int j=0; j<n; j++){
        if(isSafe(board, row, j, n)){
            board[row][j] = 'Q';
            nQueens(board, row+1, n, ans);
            board[row][j] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;

    nQueens(board, 0, n, ans);
    return ans;
    }

int main() {
    int n = 4;
    vector<vector<string>> result = solveNQueens(n);

    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << "\n";
        }
        cout << "\n";
    }
    return 0;
}