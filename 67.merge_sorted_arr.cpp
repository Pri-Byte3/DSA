// Leet code [88. Merge Sorted Array] {Easy}
/*
Write a C++ program to merge two sorted arrays.

Problem Statement:  
You are given two sorted integer arrays `nums1` and `nums2`, with sizes `m` and `n` respectively.  
`nums1` has a size of `m + n`, where the last `n` elements are set to 0 and should be ignored.  
Merge `nums2` into `nums1` so that `nums1` becomes a single sorted array.

Example:  
Input:  
    nums1 = [1, 2, 3, 0, 0, 0], m = 3  
    nums2 = [2, 5, 6], n = 3  
Output:  
    [1, 2, 2, 3, 5, 6]

Input:  
    nums1 = [0], m = 0  
    nums2 = [1], n = 1  
Output:  
    [1]

Note:  
- You must do this in-place without using extra space.  
- The final sorted array should also be stored in `nums1`.
*/

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int idx = m+n-1, i = m-1, j = n-1;
    while(i >= 0 && j >= 0){
        if(nums1[i] >= nums2[j]){
            nums1[idx--] = nums1[i--];
        }
        else{
            nums1[idx--] = nums2[j--];
        }
    }
    while(j >= 0){
        nums1[idx--] = nums2[j--];
    }
}

int main () {
    vector<int> nums1 = {1,2,3,0,0,0}, nums2 = {2,5,6};
    int m = 3, n = 3;

    merge(nums1, m, nums2, n);
    for(int i = 0; i < nums1.size(); i++){
        cout << nums1[i] << " ";
    }
    cout << "\n";
    return 0;
    }
