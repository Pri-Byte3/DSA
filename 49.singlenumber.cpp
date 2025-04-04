// Leet code [136.Single Number]{Easy}

/*
Write a C++ program to find the single non-repeating element in an array where every other element appears twice.
Example:
Input: nums = {4, 1, 2, 1, 2}
Output: 4
The program should use bitwise XOR to efficiently find the unique element.
*/

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int val : nums){
            ans = ans ^ val; 
        }
        return ans;
    }
int main() {
    vector<int> nums = {4,1,2,1,2};
    cout << singleNumber(nums) << endl; 
    return 0;
}  