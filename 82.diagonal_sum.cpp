/*
Write a C++ program to find the sum of both diagonals in a square matrix.

Problem Statement:  
You are given an `n x n` integer matrix.  
Compute the sum of the primary and secondary diagonals.

Example:  
Input:  
    matrix = {{1, 2, 3, 4},  
              {5, 6, 7, 8},  
              {9, 10, 11, 12},  
              {13, 14, 15, 16}}  
Output:  
    68  

Note:  
- The primary diagonal consists of elements where `i == j`.
- The secondary diagonal consists of elements where `j == n - 1 - i`.
- Ensure no double-counting of the center element in an odd-sized matrix.
*/


// #include <iostream> //[O(n * n)]
// using namespace std;

// int diagonal_sum(int matrix[4][4], int row, int col){
//     int sum = 0;
//     for(int i = 0; i < row; i++){
//         for(int j = 0; j < col; j++){
//             if(i == j){
//                 sum += matrix[i][j];
//             }
//             else if(j == row-1-i){
//                 sum += matrix[i][j];
//             }
//         }
//     }
//     return sum;
// }

// int main () {
//     int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//     int row = 4, col = 4; 
//     cout << diagonal_sum(matrix, row, col) << "\n";

// return 0;
// }


#include <iostream> //[O(n)]
using namespace std;

int diagonal_sum(int matrix[4][4], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += matrix[i][i];
        if(i != n-i-1){
            sum += matrix[i][n-i-1];
        }
    }
    return sum;
}

int main () {
    int matrix[4][4] = {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}, 
        {13, 14, 15, 16}
    };
    
    int n = 4; 
    cout << diagonal_sum(matrix, n) << "\n";

return 0;
}