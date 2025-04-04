/*
Write a program in C++ to find the majority element in an array.
A majority element is an element that appears more than ⌊n/2⌋ times.

Implement the following approaches:
1. Brute-force approach with O(n^2) time complexity.
2. Sorting-based approach with O(n log n) time complexity.
3. Moore's Voting Algorithm with O(n) time complexity.

If the input is:
vector<int> nums = {2, 1, 2, 1, 1};

The output should be:
1
*/

// // Brute Force Approch [O(n^2)]
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> majority_element(vector<int> nums){
//     int n = nums.size(), frequency;
//     for(int val : nums){
//         frequency = 0;
//         for(int ele : nums){
//             if(ele == val){
//                 frequency++;
//             }
//         }
//         if(frequency > n/2){
//             return {val};
//         }
//     }
//     return {-1};
// }

// int main () {
//     vector<int> nums = {1, 2, 2, 1, 1};
//     vector<int> ans = majority_element(nums);
//     cout << ans[0]; 
// return 0;
// }

// Optimal [O(nlogn)]
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majority_element(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end()); // Sort the array
    int frequency = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            frequency++; // Count consecutive identical elements
        } else {
            if (frequency > n / 2) {
                return nums[i - 1]; // Return the majority element
            }
            frequency = 1; // Reset frequency for the new element
        }
    }

    // Final check for the last group
    if (frequency > n / 2) {
        return nums[n - 1];
    }

    return -1; // No majority element found
}

int main() {
    vector<int> nums = {2, 1, 2, 1, 1};
    cout << majority_element(nums) << endl; // Output the majority element or -1
    return 0;
}


// Optimal [O(nlogn)]
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majority_element(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end()); // Sort the array
    return nums[n / 2]; // Middle element is guaranteed to be the majority element if one exists
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 1};
    cout << majority_element(nums) << endl;
    return 0;
}
// Moore's Voting Algorithm [O(n)]
#include <iostream>
#include <vector>
using namespace std;

int majority_element(vector<int>& nums) {
    int n = nums.size(), ans = 0;
    int frequency = 0;

    for (int i = 0; i < n; i++) {
        if (frequency == 0) {
            ans = nums[i]; 
        }
        if(ans == nums[i]){
            frequency++;
        } else {
            frequency--;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 1, 2, 1, 1};
    cout << majority_element(nums) << endl; 
    return 0;
}
