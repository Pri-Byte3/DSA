// Leet code [1. Two Sum] {Easy}
/*
Write a C++ program to find two indices in an array that sum up to a given target.

Problem Statement:  
You are given an array of integers `nums` and an integer `target`.  
Your task is to return the indices of the two numbers such that they add up to `target`.  
Each input has exactly one solution, and you may not use the same element twice.  
You can return the answer in any order.

Example 1:  
Input:  
    nums = [2, 7, 11, 15]  
    target = 9  
Output:  
    [0, 1]  
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:  
Input:  
    nums = [3, 2, 4]  
    target = 6  
Output:  
    [1, 2]  

Example 3:  
Input:  
    nums = [3, 3]  
    target = 6  
Output:  
    [0, 1]  

Note:  
- You must return the solution in O(n) time complexity using a hashmap for optimized lookup.
*/

// #include <iostream>
// using namespace std;

// vector<int> twoSum(vector<int>& nums, int target) {

//     vector<int> ans;
//     int n = nums.size();
//     for(int i = 0; i < n; i++){
//         for(int j = i+1; j < n; j++){
//             if(nums[i] + nums[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int> nums = {2, 0, 2, 1, 1, 0};
//     int target = 3;

//     vector<int> result = twoSum(nums, target);
    
//     if (!result.empty()) {
//         cout << "[" << result[0] << ", " << result[1] << "]" << endl;
//     } else {
//         cout << "No valid pair found!" << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    unordered_map<int, int> m;
    for(int i = 0; i < nums.size(); i++){
        int first = nums[i];
        int second = target - first;
        if(m.find(second) != m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first] = i;
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    int target = 3;

    vector<int> result = twoSum(nums, target);
    
    if (!result.empty()) {
        cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No valid pair found!" << endl;
    }

    return 0;
}