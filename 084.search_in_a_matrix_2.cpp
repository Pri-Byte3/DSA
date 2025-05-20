// Leet code [240. Search a 2D Matrix II] {Medium}
/*
Write a C++ program to search for a target element in a row-wise and column-wise sorted 2D matrix.

Problem Statement:  
You are given an `m x n` matrix where:  
- Each row is sorted in ascending order.  
- Each column is sorted in ascending order.  
Your task is to determine whether a given `target` value exists in the matrix.

Example:  
Input:  
    matrix =  
    [  
      [1, 4, 7, 11, 15],  
      [2, 5, 8, 12, 19],  
      [3, 6, 9, 16, 22],  
      [10, 13, 14, 17, 24],  
      [18, 21, 23, 26, 30]  
    ]  
    target = 5  
Output:  
    "Found"

Input:  
    matrix =  
    [  
      [1, 4, 7, 11, 15],  
      [2, 5, 8, 12, 19],  
      [3, 6, 9, 16, 22],  
      [10, 13, 14, 17, 24],  
      [18, 21, 23, 26, 30]  
    ]  
    target = 20  
Output:  
    "Not Found"

Note:  
- Implement an efficient algorithm with better than O(m * n) complexity.  
- The optimal approach uses a stepwise search from the top-right or bottom-left corner.
*/

#include <iostream>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size(), n = matrix[0].size();
    int st = 0, end = n-1;
    while(st < m && end >= 0){
        if(matrix[st][end] == target) return true;
        else if(matrix[st][end] > target){
            end--;
        }
        else{
            st++;
        }
    }
    return false;
}

int main () {
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19}, 
        {3, 6, 9, 16, 22}, 
        {10, 13, 14, 17, 24}, 
        {18, 21, 23, 26, 30}
    };
    
    int target = 5; 
    cout << (searchMatrix(matrix, target) ? "Found" : "Not Found") << "\n";
return 0;
}