// LeetCode [704. Binary Search] {Easy}
/*
Problem Statement:
You are given a sorted array of integers `nums` in ascending order, and an integer `target`.
Your task is to implement a function that returns the index of `target` if it exists in the array.
If it does not exist, return `-1`. You must implement the solution using **binary search** and **recursion**.

Example 1:
Input:
    nums = [-1, 0, 3, 5, 9, 12], target = 9
Output:
    4
Explanation:
    9 is present at index 4.

Example 2:
Input:
    nums = [-1, 0, 3, 5, 9, 12], target = 2
Output:
    -1
Explanation:
    2 is not present in the array.

Constraints:
- `1 <= nums.length <= 10^5`
- `-10^4 <= nums[i], target <= 10^4`
- All elements in `nums` are unique.
- `nums` is sorted in **ascending** order.

Knowledge Concept:
This problem is based on the classic **Binary Search** algorithm, a fundamental **Divide and Conquer** technique.
Recursive binary search splits the problem into halves until the target is found or the search space is empty.
Time Complexity: O(log n)
Space Complexity: O(log n) due to the recursion stack.
*/

#include <iostream>
using namespace std;

int bin_Search(vector<int>& nums, int target, int st, int end){
    if(st <= end){
        int mid = st + (end - st)/2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] < target){
            return bin_Search(nums, target, mid+1, end);
        }
        else{
            return bin_Search(nums, target, st, mid-1);
        }
    }
    return -1;
}

int search(vector<int>& nums, int target) {
    return bin_Search(nums, target, 0, nums.size() - 1);
}


int main () {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int target = 3;
    cout << search(nums, target) << endl;
    return 0;
}