// LeetCode [560. Subarray Sum Equals K] {Medium}
/*
Problem Statement:
Given an array of integers `nums` and an integer `k`, return the total number of subarrays whose sum equals to `k`.

A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:
Input:
    nums = [1, 1, 1], k = 2
Output:
    2
Explanation:
    There are two subarrays that sum to 2: [1,1] (at indices 0-1 and 1-2).

Example 2:
Input:
    nums = [9, 4, 0, 20, 3, 10, 5], k = 33
Output:
    1
Explanation:
    The subarray [0, 20, 3, 10] sums to 33.

Constraints:
- `1 <= nums.length <= 2 * 10^4`
- `-1000 <= nums[i] <= 1000`
- `-10^7 <= k <= 10^7`

Knowledge Concept:
This problem is efficiently solved using **Prefix Sum with HashMap**.
The key idea is to store the frequency of prefix sums seen so far.
If `prefixSum[j] - k` exists in the map, then a subarray ending at index `j` sums to `k`.
Time Complexity: O(n), Space Complexity: O(n).
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Brute-force Approach Time: O(n^2) | Space: O(1)
#include <iostream>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += nums[j];
            if(sum == k) count++;
        }
    }
    return count;
}

int main(){
    vector<int> nums = {1,1,1};
    int k = 2;
    cout << subarraySum(nums, k) << "\n";
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Optimized Approach Using Prefix Sum + Hash Map Time: O(n) | Space: O(n)
#include <iostream>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;
    vector<int> prefixSum(n, 0);
    prefixSum[0] = nums[0];
    
    for(int i = 1; i < n; i++){
        prefixSum[i] = prefixSum[i-1] + nums[i];
    }

    unordered_map<int, int> m;

    for(int j = 0; j < n; j++){
        if(prefixSum[j] == k){
            count++;
        }
        int val = prefixSum[j] - k;
        if(m.find(val) != m.end()){
            count += m[val];
        }
        if(m.find(prefixSum[j]) == m.end()){
            m[prefixSum[j]] = 0;
        }
        m[prefixSum[j]]++;
    }
    return count;
}

int main(){
    vector<int> nums = {9, 4, 0, 20, 3, 10, 5};
    int k = 33;
    cout << subarraySum(nums, k) << "\n";
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////