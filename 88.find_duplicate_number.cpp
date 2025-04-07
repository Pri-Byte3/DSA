// LeetCode [287. Find the Duplicate Number] {Medium}
/*
Problem Statement:
You are given an integer array `nums` containing `n + 1` integers where each integer is between 
`1` and `n` (inclusive), and there is only one repeated number. Your task is to find and return 
the repeated number.

Example 1:
Input:
    nums = [1, 3, 4, 2, 2]
Output:
    2
Explanation:
    The number `2` is repeated.

Example 2:
Input:
    nums = [3, 1, 3, 4, 2]
Output:
    3
Explanation:
    The number `3` is repeated.

Constraints:
- `n == nums.length`
- `1 <= n <= 10^5`
- `1 <= nums[i] <= n`
- Only one duplicate number is allowed, and the array will not contain any other duplicates.

Knowledge Concept:
This problem can be solved optimally using **Floyd’s Tortoise and Hare (Cycle Detection) algorithm**, 
which is commonly used to detect cycles in a linked list or array traversal.
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Brute-force using a HashSet Time: O(n) | Space: O(n) (extra hash set)
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

unordered_set<int>s;

int findDuplicate(vector<int>& nums) {
    for(int val : nums){
        if(s.find(val) != s.end()){
            return val;
        }
        s.insert(val);
    }
    return -1;
}

int main() {
    vector<int> nums = {3, 1, 3, 4, 2}; 
    int result = findDuplicate(nums);  
    cout << "Duplicate: " << result << endl;  
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Floyd’s Tortoise and Hare Algorithm (Cycle Detection) Time: O(n) | Space: O(1) — No extra memory!
#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int slow = nums[0], fast = nums[0];
    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow != fast);

    slow = nums[0];

    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int main() {
    vector<int> nums = {3, 1, 3, 4, 2}; 
    int result = findDuplicate(nums);  
    cout << "Duplicate: " << result << endl;  
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////