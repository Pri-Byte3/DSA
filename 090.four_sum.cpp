// LeetCode [18. 4Sum] {Medium}
/*
Problem Statement:
Given an array `nums` of `n` integers and an integer `target`, return all unique quadruplets `[nums[a], nums[b], nums[c], nums[d]]` such that:
- `a`, `b`, `c`, and `d` are distinct indices.
- `nums[a] + nums[b] + nums[c] + nums[d] == target`.
- The solution set must not contain duplicate quadruplets.

Example 1:
Input:
    nums = [1, 0, -1, 0, -2, 2], target = 0
Output:
    [[-2, -1, 1, 2], [-2, 0, 0, 2], [-1, 0, 0, 1]]
Explanation:
    - The valid quadruplets that sum to `0` are `[-2, -1, 1, 2]`, `[-2, 0, 0, 2]`, and `[-1, 0, 0, 1]`.

Example 2:
Input:
    nums = [2, 2, 2, 2, 2], target = 8
Output:
    [[2, 2, 2, 2]]
Explanation:
    - The only valid quadruplet is `[2, 2, 2, 2]`.

Constraints:
- `4 <= nums.length <= 200`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`

Knowledge Concept:
This problem can be solved efficiently using a **Two Pointer Approach** after sorting the array.
The sorting step helps avoid duplicate quadruplets while maintaining an `O(n^3)` time complexity.
*/

#include <iostream>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    for(int i = 0; i < n; i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;

        for(int j = i+1; j < n; j++){
            if(j > i+1 && nums[j] == nums[j-1]) continue;

            int k = j+1, l = n-1;
            while (k < l){
                long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[k] + (long long)nums[l];
                if(sum < target){
                    k++;
                }
                else if(sum > target){
                    l--;
                }
                else{
                    ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++; l--;
                    while(k < l && nums[k] == nums[k-1]) k++;
                }
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2,2,2,2,2};
    int target = 8;

    vector<vector<int>> result = fourSum(nums, target);  

    for (int i = 0; i < result.size(); i++) {
        cout << "[" << result[i][0] << ", " << result[i][1] << ", " << result[i][2] << ", " << result[i][3] << "]\n";
    }

    return 0;
}