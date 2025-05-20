// LeetCode [2596. Check Knight Tour Configuration] {Medium}
/*
Problem Statement:
You are given an n x n integer matrix `grid` where `grid[row][col]` is the move number
that a knight made in a **valid knight's tour**.

The knight's tour is a sequence of moves of a knight on a chessboard such that the knight
visits every square **exactly once**. The knight starts at square [0, 0].

Return true if the grid represents a valid knight’s tour configuration. Otherwise, return false.

A knight move is valid if:
- From position (x, y), it can move to (x±1, y±2) or (x±2, y±1)

Example:
Input:
grid = [
    [0,11,16,5,20],
    [17,4,19,10,15],
    [12,1,8,21,6],
    [3,18,23,14,9],
    [24,13,2,7,22]
]
Output: true

Time Complexity: O(N^2)  
Space Complexity: O(N^2)
*/

#include<iostream>
using namespace std; 

bool isValid(vector<vector<int>>& grid, int r, int c, int n, int expVal){
    if(r<0 || c<0 || r>=n || c>=n || grid[r][c] != expVal){
        return false;
    }
    if(expVal == n*n-1){
        return true;
    }
    int ans1 = isValid(grid, r-2, c+1, n, expVal+1);
    int ans2 = isValid(grid, r-1, c+2, n, expVal+1);
    int ans3 = isValid(grid, r+1, c+2, n, expVal+1);
    int ans4 = isValid(grid, r+2, c+1, n, expVal+1);
    int ans5 = isValid(grid, r+2, c-1, n, expVal+1);
    int ans6 = isValid(grid, r+1, c-2, n, expVal+1);
    int ans7 = isValid(grid, r-1, c-2, n, expVal+1);
    int ans8 = isValid(grid, r-2, c-1, n, expVal+1);

    return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
}

bool checkValidGrid(vector<vector<int>>& grid) {
    return isValid(grid, 0, 0, grid.size(), 0);
}

int main(){
    vector<vector<int>> grid = {
        {0,11,16,5,20},
        {17,4,19,10,15},
        {12,1,8,21,6},
        {3,18,23,14,9},
        {24,13,2,7,22}
};
    cout << checkValidGrid(grid) << endl;
    return 0;
}