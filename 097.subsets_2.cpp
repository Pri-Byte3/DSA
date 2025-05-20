// LeetCode [90. Subsets II] {Medium}
/*
Problem Statement:
Given an integer array `nums` that may contain duplicates, return all possible subsets (the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.

Example:
Input: nums = [1, 2, 2]
Output:
[
  [2],
  [1],
  [1,2,2],
  [2,2],
  [1,2],
  []
]

Time Complexity: O(2^N)
Space Complexity: O(N) for recursion stack + O(2^N) for storing subsets
*/


#include <iostream>
using namespace std;

void make_subsets(vector<int> &arr, vector<int> &ans, int i, vector<vector<int>> &allsubsets){
    if(i == arr.size()){
    allsubsets.push_back({ans});
    return;
}

    ans.push_back(arr[i]);
    make_subsets(arr, ans, i+1, allsubsets);

    ans.pop_back();

    int idx = i+1;
    while(idx < arr.size() && arr[idx] == arr[idx - 1]){
        idx++;
    }
    make_subsets(arr, ans, idx, allsubsets);
}

vector<vector<int>> subsetsWithDup(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    vector<vector<int>> allsubsets;
    vector<int> ans;
    make_subsets(arr, ans, 0, allsubsets);
    return allsubsets;
    
}

int main() {
    vector<int> arr = {1, 2, 2};
    vector<vector<int>> result = subsetsWithDup(arr);

    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << "[";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
            if (j < result[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i < result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}