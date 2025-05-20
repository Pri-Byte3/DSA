/*
Write a C++ program to find the row with the maximum sum in a 2D matrix.

Problem Statement:  
You are given a `row x col` integer matrix.  
Find the row with the maximum sum and return the sum.

Example:  
Input:  
    matrix = {{1, 2, 3},  
              {4, 5, 6},  
              {7, 8, 9}}  
Output:  
    24  

Note:  
- The row with the maximum sum should be computed efficiently.
*/

#include <iostream>
using namespace std;
int max_row_sum(int matrix[3][3], int row, int col){
    int sum, final_sum = 0;
    for(int i = 0; i < row; i++){
        sum = 0;
        for(int j = 0; j < col; j++){
            sum += matrix[i][j];
        }
        final_sum = max(final_sum, sum);
    }
    return final_sum;
}

int main () {
    int matrix[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };
    
    int row = 3, col = 3; 
    cout << max_row_sum(matrix, row, col) << "\n";

return 0;
}