// LeetCode [46. Permutations] {Medium}
/*
Problem Statement:
Given an array `nums` of distinct integers, return all the possible permutations.
You can return the answer in any order.

Example:
Input: nums = [1, 2, 3]
Output:
[
 [1,2,3],
 [1,3,2],
 [2,1,3],
 [2,3,1],
 [3,1,2],
 [3,2,1]
]

Time Complexity: O(N!)
Space Complexity: O(N) for recursion stack + O(N!) for storing permutations
*/


#include <iostream>
using namespace std;

void get_permutation(vector<int>& nums, vector<vector<int>> &ans, int idx){
    if(idx == nums.size()){
        ans.push_back({nums});
    }
    for(int i = idx; i < nums.size(); i++){
        swap(nums[i], nums[idx]);
        get_permutation(nums, ans, idx+1);
        swap(nums[i], nums[idx]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    get_permutation(nums, ans, 0);
    return ans;
    
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> result = permute(arr);

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