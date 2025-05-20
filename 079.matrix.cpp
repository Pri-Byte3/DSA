/*
Write a C++ program to search for a target element in a 2D matrix.

Problem Statement:  
You are given a `row x col` integer matrix and a target element.  
Find the target element in the matrix and return its position.

Example:  
Input:  
    matrix = {{1, 2, 3},  
              {4, 5, 6},  
              {7, 8, 9},  
              {10, 11, 12}}  
    target = 3  
Output:  
    Found  
    0,2  

Note:  
- If the element is found, return its row and column index.
- If the element is not found, return a message stating "Not Found".
*/

#include <iostream>
using namespace std;

int main () {
    int matrix[4][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}, 
        {10, 11, 12}
    };
    
    int row = 4, col = 3;
    int target = 3;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(matrix[i][j] == target){

                cout << "Found" << "\n";
                pair<int, int> p = {i, j};
                cout << p.first << "," << p.second << "\n";
            }
        }
    }

return 0;
}