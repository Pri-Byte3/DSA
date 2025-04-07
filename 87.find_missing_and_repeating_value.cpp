// LeetCode [2965. Find Missing and Repeated Values] {Easy}
/*
Problem Statement:
You are given an `n x n` grid where each number from `1` to `n^2` appears **exactly once**, 
except that **one number** is **missing** and **another number** is **repeated**.
Your task is to **find the missing and repeated numbers**.

Example 1:
Input:
    grid = [
        [1, 3],
        [2, 2]
    ]
Output:
    [2, 4]
Explanation:
    - The number `2` is **repeated**.
    - The number `4` is **missing**.

Example 2:
Input:
    grid = [
        [9, 1, 7],
        [8, 9, 5],
        [6, 3, 2]
    ]
Output:
    [9, 4]
Explanation:
    - The number `9` is **repeated**.
    - The number `4` is **missing**.

Constraints:
- `n == grid.length == grid[i].length`
- `2 <= n <= 50`
- `1 <= grid[i][j] <= n^2`
- Every number from `1` to `n^2` appears **exactly once**, except **one number** is missing and **one number** is repeated.

Approach:
1. Use a `unordered_set<int>` to track seen numbers and find the repeated number.
2. Compute the expected sum of numbers from `1` to `n^2`.
3. Compute the actual sum of numbers in the grid.
4. The missing number is found using the formula:
   \[
   \text{missing} = \text{expected sum} - \text{actual sum} + \text{repeated}
   \]
5. Return `[repeated, missing]`.
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    unordered_set<int>s;
    vector<int> ans;
    int n = grid.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if(s.find(grid[i][j]) != s.end()){
                int a = grid[i][j];
                ans.push_back(a);
                break;
            }
            s.insert(grid[i][j]); 
        } 
    }
    int exp_sum = 0;
    for(int i = 0; i <= n*n; i++){
        exp_sum += i;
    } 
    int acc_sum = 0;   
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            acc_sum += grid[i][j];
        }
    }
    int b = exp_sum - acc_sum + ans[0];  
    ans.push_back(b); 
    return ans; 
}

int main() {
    vector<vector<int>> grid = {
        {1, 3},
        {2, 2}
    };

    vector<int> result = findMissingAndRepeatedValues(grid);
    
    if (!result.empty()) {
        cout << "[" << result[0] << "," << result[1] << "]" << endl;
    } else {
        cout << "[]" << endl;
    }

    return 0;
}