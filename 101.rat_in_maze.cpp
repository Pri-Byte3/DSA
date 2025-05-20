// [Rat in a Maze] {Backtracking}
/*
Problem Statement:
Given a square maze (n x n) with cells marked as 1 (open) and 0 (blocked), 
find all possible paths from the top-left corner (0,0) to the bottom-right corner (n-1,n-1). 
The rat can move only in four directions: Up (U), Down (D), Left (L), and Right (R), 
and cannot visit the same cell more than once in a path.

Return all such possible paths in **lexicographical order**.

Example Input:
maze = {{1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}}

Expected Output:
DRDDRR
DRDRDR

Time Complexity: O(4^(n^2)) in the worst case, since each cell can lead to 4 directions.
Space Complexity: O(n^2) recursion stack in the worst case + space for storing paths.
*/

#include<iostream>
using namespace std;

void helper(vector<vector<int>> &maze, int r, int c, string path, vector<string> &ans){
    int n = maze.size();

    if(r < 0 || c < 0 || r >= n || c >= n || maze[r][c] == 0 || maze[r][c] == -1){
        return;
    }

    if(r == n-1 && c == n-1){
        ans.push_back(path);
        return;
    }

    maze[r][c] = -1; //visit

    helper(maze, r-1, c, path+"U", ans);//up
    helper(maze, r+1, c, path+"D", ans);//down
    helper(maze, r, c+1, path+"R", ans);//right
    helper(maze, r, c-1, path+"L", ans);//left

    maze[r][c] = 1; //unvisit
}


vector<string> findPath(vector<vector<int>> &maze) {
    vector<string> ans;
    string path = "";
    helper(maze, 0, 0, path, ans);
    return ans;
}


int main(){
    vector<vector<int>> maze = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string> ans = findPath(maze);

    for(string path : ans){
        cout << path << endl;
    }
    return 0;
}