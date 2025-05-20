// LeetCode [78. Subsets] {Medium}
/*
Problem Statement:
Given an integer array `nums` of unique elements, return all possible subsets (the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.

Example:
Input: nums = [1, 2, 3]
Output:
[
  [1],
  [2],
  [3],
  [1,2],
  [1,3],
  [2,3],
  [1,2,3],
  []
]

Time Complexity: O(2^N)
Space Complexity: O(N) for recursion stack + O(2^N) for storing subsets
*/


#include <iostream>
using namespace std;

void print_subsets(vector<int> &arr, vector<int> &ans, int i){
    if(i == arr.size()){
        for(int val : ans){
            cout << val << " ";
        }
        cout << endl;
        return;
    }
    ans.push_back(arr[i]);
    print_subsets(arr, ans, i+1);

    ans.pop_back();
    print_subsets(arr, ans, i+1);
}

int main () {
    vector<int> arr = {1, 2, 3};
    vector<int> ans;
    print_subsets(arr, ans, 0);

return 0;
}