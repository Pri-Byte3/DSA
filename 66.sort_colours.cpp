// Leet code [75. Sort Colors] {Medium}

/*
Write a C++ program to sort an array containing only 0s, 1s, and 2s without using any built-in sorting functions.

Problem Statement:
You are given a vector of integers that consists of only the values 0, 1, and 2.
Rearrange the elements so that all 0s come first, followed by all 1s, and then all 2s.

Example:
Input:
    nums = {2, 0, 2, 1, 1, 0}
Output:
    0 0 1 1 2 2
*/

#include <iostream>
#include <vector>
using namespace std;


    void sortColors(vector<int>& nums) {
        int n = nums.size(), zeros = 0, ones = 0, twos = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                zeros++;
            }
            else if(nums[i] == 1){
                ones++;
            }
            else{
                twos++;
            }
        }
        int idx = 0;
        for(int i = 0; i < zeros; i++){
            nums[idx++] = 0;
        }
        for(int i = 0; i < ones; i++){
            nums[idx++] = 1;
        }
        for(int i = 0; i < twos; i++){
            nums[idx++] = 2;
        }
    }
int main () {
vector<int> nums = {2,0,2,1,1,0};
sortColors(nums);
for(int i = 0; i < nums.size(); i++){
    cout << nums[i] << " ";
}
cout << "\n";
return 0;
} 