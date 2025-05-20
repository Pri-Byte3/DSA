// LeetCode [37. Sudoku Solver] {Hard}
/*
Problem Statement:
Write a program to solve a Sudoku puzzle by filling the empty cells.
A sudoku solution must satisfy all of the following rules:
- Each of the digits 1–9 must occur exactly once in each row.
- Each of the digits 1–9 must occur exactly once in each column.
- Each of the digits 1–9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.

The '.' character indicates empty cells.

Example Input:
[
  ['5','3','.','.','7','.','.','.','.'],
  ['6','.','.','1','9','5','.','.','.'],
  ['.','9','8','.','.','.','.','6','.'],
  ['8','.','.','.','6','.','.','.','3'],
  ['4','.','.','8','.','3','.','.','1'],
  ['7','.','.','.','2','.','.','.','6'],
  ['.','6','.','.','.','.','2','8','.'],
  ['.','.','.','4','1','9','.','.','5'],
  ['.','.','.','.','8','.','.','7','9']
]

Expected Output:
[
  ['5','3','4','6','7','8','9','1','2'],
  ['6','7','2','1','9','5','3','4','8'],
  ['1','9','8','3','4','2','5','6','7'],
  ['8','5','9','7','6','1','4','2','3'],
  ['4','2','6','8','5','3','7','9','1'],
  ['7','1','3','9','2','4','8','5','6'],
  ['9','6','1','5','3','7','2','8','4'],
  ['2','8','7','4','1','9','6','3','5'],
  ['3','4','5','2','8','6','1','7','9']
]

Time Complexity: O(9^(n * n)) in the worst case (backtracking over each cell with 9 choices)
Space Complexity: O(1) (board is modified in-place; recursion stack is at most 81 calls deep)
*/

#include <iostream>
using namespace std;

bool isSafe(vector<vector<char>>& board,int row, int col, char val){
    // horiazontal
    for(int j=0; j<9; j++){
        if(board[row][j] == val){
            return false;
        }
    }
    // vertical
    for(int i=0; i<9; i++){
        if(board[i][col] == val){
            return false;
        }
    }
    // grid
    int srow = (row/3)*3;
    int scol = (col/3)*3;
    for(int i=srow; i<=srow+2; i++){
        for(int j=scol; j<=scol+2; j++){
            if(board[i][j] == val){
                return false;
            }
        }
    }
    return true;
}

bool ss(vector<vector<char>>& board,int row, int col){
    if(row == 9){
        return true;
    }
    int nextRow = row, nextCol = col+1;
    if(nextCol == 9){
        nextRow = row+1;
        nextCol = 0;
    }
    if(board[row][col] != '.'){
        return ss(board, nextRow, nextCol);
    }
    for(char val='1'; val<='9'; val++){
        if(isSafe(board, row, col, val)){
            board[row][col] = val;
            if(ss(board, nextRow, nextCol)){
                return true;
            }
            board[row][col] = '.';
        }
    }
    return false;
}

void solveSudoku(vector<vector<char>>& board) {
    ss(board, 0, 0);
}

int main(){
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    solveSudoku(board);

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }        

    return 0;
}