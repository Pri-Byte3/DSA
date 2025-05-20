// Custom Problem [Check if Array is Sorted using Recursion]
/*
Problem Statement:
Given an array of integers, determine whether the array is sorted in **non-decreasing order** using recursion.

You must return `true` if the array is sorted and `false` otherwise.

Example 1:
Input:
    arr = [1, 2, 3, 4, 5]
Output:
    true
Explanation:
    All elements are in non-decreasing order.

Example 2:
Input:
    arr = [1, 2, 3, 4, 5, 3]
Output:
    false
Explanation:
    The last element `3` is smaller than `5`, hence the array is not sorted.

Constraints:
- `1 <= arr.length <= 10^5`
- Array elements can be negative or positive integers.

Knowledge Concept:
This problem uses **recursion** to verify the property of being sorted by checking adjacent elements from the end towards the beginning.
The time complexity of this approach is **O(n)** and space complexity is **O(n)** due to recursion stack.
*/

#include <iostream>
using namespace std;

bool is_Sorted(vector<int> arr, int n){
    if(n == 0 || n == 1){
        return true;
    }
    return arr[n-1] >= arr[n-2] && is_Sorted(arr, n-1);
}

int main () {
    vector<int> arr = {1, 2, 3, 4, 5, 3};
    int n = arr.size();
    cout << is_Sorted(arr, n) << endl;

return 0;
}