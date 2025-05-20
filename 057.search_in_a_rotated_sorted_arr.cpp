// Leet code [33. Search in Rotated Sorted Array] {Medium}
/*
Write a C++ program to search for a target value in a rotated sorted array.

The program should:
1. Take a rotated sorted array and a target value as input.
2. Implement an efficient search algorithm using binary search.
3. Return the index of the target if found; otherwise, return -1.

If the input is:
Array: [4, 5, 6, 7, 0, 1, 2]
Target: 0

The output should be:
4

(Explanation: The element 0 is found at index 4 in the given rotated sorted array.)
*/

#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (target == nums[mid]) {
                return mid;

            }else if (nums[st] <= nums[mid]) { // Left side sorted
                if (nums[st] <= target && target <= nums[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }

            } else { // Right side sorted
                if (nums[mid] <= target && target <= nums[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }

int main () {
vector<int> nums = {4,5,6,7,0,1,2};
int target = 0;
cout << search(nums, target) << "\n";
return 0;
}    