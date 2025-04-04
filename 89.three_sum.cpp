// LeetCode [15. 3Sum] {Medium}
/*
Problem Statement:
Given an integer array `nums`, return all the triplets `[nums[i], nums[j], nums[k]]` such that:
- `i != j`, `i != k`, and `j != k`
- `nums[i] + nums[j] + nums[k] == 0`
- The solution set must not contain duplicate triplets.

Example 1:
Input:
    nums = [-1, 0, 1, 2, -1, -4]
Output:
    [[-1, -1, 2], [-1, 0, 1]]
Explanation:
    - The triplets `[-1, -1, 2]` and `[-1, 0, 1]` sum to `0`.
    - These are the only unique triplets that satisfy the condition.

Example 2:
Input:
    nums = [0, 1, 1]
Output:
    []
Explanation:
    - There are no triplets that sum to `0`.

Example 3:
Input:
    nums = [0, 0, 0]
Output:
    [[0, 0, 0]]
Explanation:
    - The only valid triplet is `[0, 0, 0]`.

Constraints:
- `3 <= nums.length <= 3000`
- `-10^5 <= nums[i] <= 10^5`

Knowledge Concept:
This problem can be efficiently solved using the **Two Pointer Approach** after sorting the array.
The sorting step helps eliminate duplicate triplets while keeping the solution within `O(n^2)` time complexity.
*/

// 1.
// // Brute Force Approch
// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm> 
// using namespace std;

// vector<vector<int>> threeSum(vector<int>& nums) {
//     int n = nums.size();
//     vector<vector<int>> ans;

//     set<vector<int>> s;

//     for(int i = 0; i < n; i++){
//         for(int j = i+1; j < n; j++){
//             for(int k = j+1; k < n; k++){
                
//                 if(nums[i] + nums[j] + nums[k] == 0){
//                     vector<int> trip = {nums[i], nums[j], nums[k]};
//                     sort(trip.begin(), trip.end());

//                     if(s.find(trip) == s.end()){
//                         s.insert(trip);
//                         ans.push_back(trip);
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int> nums = {-1, 0, 1, 2, -1, -4}; 
//     vector<vector<int>> result = threeSum(nums);  

//     for (int i = 0; i < result.size(); i++) {
//         cout << "[" << result[i][0] << ", " << result[i][1] << ", " << result[i][2] << "]\n";
//     }

//     return 0;
// }



// 2.
// // Better Approch [Hashing]
// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm> 
// using namespace std;

// vector<vector<int>> threeSum(vector<int>& nums) {
//     int n = nums.size();
    
//     set<vector<int>> unique_trip;
    
//     for(int i = 0; i < n; i++){
//         int tar = -nums[i];
//         set<int> s;
        
//         for(int j = i+1; j < n; j++){
//             int third = tar - nums[j];
                
//                 if(s.find(third) != s.end()){
//                     vector<int> trip = {nums[i], nums[j], third};
//                     sort(trip.begin(), trip.end());
//                     unique_trip.insert(trip);
//               }
//               s.insert(nums[j]);
//             }
//         }
//         vector<vector<int>> ans(unique_trip.begin(), unique_trip.end());
//     return ans;
// }

// int main() {
//     vector<int> nums = {-1, 0, 1, 2, -1, -4}; 
//     vector<vector<int>> result = threeSum(nums);  

//     for (int i = 0; i < result.size(); i++) {
//         cout << "[" << result[i][0] << ", " << result[i][1] << ", " << result[i][2] << "]\n";
//     }

//     return 0;
// }



// 3.
// Optimized Approach [Two pointer]
#include <iostream>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;
        int j = i+1, k = n-1;
        while(j < k){
            int curr_sum = nums[i] + nums[j] + nums[k];
            if(curr_sum > 0) k--;
            else if(curr_sum < 0) j++;
            else{
                ans.push_back({nums[i], nums[j], nums[k]});
                j++; k--;
                while(j < k && nums[j] == nums[j-1]) j++;
            }

        }
    }
    return ans;
}
int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4}; 
    vector<vector<int>> result = threeSum(nums);  

    for (int i = 0; i < result.size(); i++) {
        cout << "[" << result[i][0] << ", " << result[i][1] << ", " << result[i][2] << "]\n";
    }

    return 0;
}