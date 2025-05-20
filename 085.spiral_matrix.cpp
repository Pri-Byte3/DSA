// LeetCode [54. Spiral Matrix] {Medium}
/*
Problem Statement:
Given an `m x n` matrix, return all elements of the matrix in spiral order.

Example 1:
Input:
    matrix = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ]
Output:
    [1, 2, 3, 6, 9, 8, 7, 4, 5]

Example 2:
Input:
    matrix = [
        [1, 2, 3, 4],
        [5, 6, 7, 8],
        [9, 10, 11, 12]
    ]
Output:
    [1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7]

Constraints:
- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 10`
- `-100 <= matrix[i][j] <= 100`

Approach:
1. Use four boundaries: `top`, `bottom`, `left`, `right` to keep track of traversal limits.
2. Traverse in four directions: left to right, top to bottom, right to left, and bottom to top.
3. Shrink the boundaries after completing each layer.
4. Repeat until all elements are visited.
*/

#include <iostream>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    int top = 0, bottom = m-1, left = 0, right = n-1;
    vector<int> ans;
    //if (matrix.empty() || matrix[0].empty()) return {};
    while(top <= bottom && left <= right){
        for(int j = left; j <= right; j++){
            ans.push_back(matrix[top][j]);
        }
        
        for(int i = top+1; i <= bottom; i++){
            ans.push_back(matrix[i][right]);
        }
        
        for(int j = right-1; j >= left; j--){
            if(top == bottom){
                break;
            }
            ans.push_back(matrix[bottom][j]);
        }
        
        for(int i = bottom-1; i >= top+1; i--){
            if(left == right){
                break;
            }
            ans.push_back(matrix[i][left]);
        }
        top++;
        right--;
        bottom--;
        left++;
    }
    return ans;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    vector<int> result = spiralOrder(matrix);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}