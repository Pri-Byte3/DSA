// Leet code [74. Search a 2D Matrix] {Medium}
/*
Write a C++ program to search for a target element in a sorted 2D matrix.

Problem Statement:  
You are given an `m x n` matrix where each row is sorted in ascending order, and the first element of each row is greater than the last element of the previous row.  
Your task is to determine whether a given `target` value exists in the matrix.

Example:  
Input:  
    matrix =  
    [  
      [1, 2, 3],  
      [4, 5, 6],  
      [7, 8, 9]  
    ]  
    target = 3  
Output:  
    "Found"

Input:  
    matrix =  
    [  
      [1, 3, 5],  
      [7, 10, 11],  
      [12, 16, 20]  
    ]  
    target = 8  
Output:  
    "Not Found"

Note:  
- Implement an efficient algorithm to search for the target.  
- You must use a binary search approach for an optimal solution.
*/

#include <iostream>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int i = 0;
    int m = matrix.size(), n = matrix[i].size();
    int st = 0, end = m-1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(matrix [mid][0] <= target && target <= matrix [mid][n-1]){
            int st1 = 0, end1 = n-1;
            while(st1 <= end1){
                int mid1 = st1 + (end1 - st1)/2;
                if(matrix[mid][mid1] == target) return true;
                else if(matrix[mid][mid1] < target){
                    st1 = mid1 + 1;
                }else{
                    end1 = mid1 - 1;
                }
            }
            return false;
        }
        else if(target >= matrix [mid][n-1]){
            st = mid + 1;
        }
        else{
            end = mid - 1;
            }
        }
    return false;
}

int main () {
    vector<vector<int>> matrix = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };
    
    int target = 3; 
    cout << (searchMatrix(matrix, target) ? "Found" : "Not Found") << "\n";

return 0;
}
