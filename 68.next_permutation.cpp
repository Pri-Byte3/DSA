// Leet code [31. Next Permutation] {Medium}
/*
Write a C++ program to find the next permutation of a given array.

Problem Statement:  
You are given an integer array `nums` of size `n`.  
Your task is to rearrange `nums` into its next lexicographically greater permutation.  
If such a permutation is not possible (i.e., the array is in descending order), rearrange it as the lowest possible order (ascending order).

Example:  
Input:  
    nums = [1, 2, 3]  
Output:  
    [1, 3, 2]

Input:  
    nums = [3, 2, 1]  
Output:  
    [1, 2, 3]

Input:  
    nums = [1, 1, 5]  
Output:  
    [1, 5, 1]

Note:  
- The rearrangement must be done in-place, using only constant extra memory.  
- The next permutation is the immediate larger permutation formed by rearranging the given numbers.  
- If the given permutation is the largest, return the smallest possible permutation (sorted in ascending order).
*/

#include <iostream>
#include <vector>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int pivot = -1, n = nums.size();
    for(int i = n-2; i >= 0; i--){
        if(nums[i] < nums[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot == -1){
        reverse(nums.begin(), nums.end());
        return;
    }

    for(int i = n-1; i >= pivot; i--){
        if(nums[i] > nums[pivot]){
            swap(nums[i], nums[pivot]);
            break;
        }
    }
    int i = pivot+1, j = n-1;    
    while(i <= j){
        swap(nums[i++], nums[j--]);
    }
    // reverse(nums.begin() + pivot + 1, nums.end());
}

int main () {
    vector<int> nums = {1,2,3};
    nextPermutation(nums);
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << "\n";
    return 0;
    } 