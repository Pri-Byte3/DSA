// Leet code [1.Two Sum]{Easy}

/*
Write a program in C++ to find two numbers in an array that add up to a given target sum.
Implement both:
1. A brute-force approach with O(n^2) time complexity.
2. An optimal approach using the two-pointer technique with O(n) time complexity.

If the input is:
vector<int> nums = {2, 7, 11, 15};
int target = 9;

The output should be:
2,7
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Brute Force Approch [O(n^2)]
#include <iostream>
#include <vector>
using namespace std;

vector<int> pair_sum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans;
            }
        }
    }                                               
    return ans;
}

int main () {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = pair_sum(nums, target);
    cout << ans[0] << "," << ans[1];
return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Optimal [O(n)]
#include <iostream>
#include <vector>
using namespace std;

vector<int> pair_sum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size(), pairsum = 0, st = 0, end = n - 1;

    while(st < end){
        pairsum = nums[st] + nums[end];
        if(pairsum > target){
            end--;
        }else if(pairsum < target){
            st++;
        }else{
            ans.push_back(nums[st]);
            ans.push_back(nums[end]);
            return ans;
        }
    }
    return ans;
}

int main () {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = pair_sum(nums, target);
    cout << ans[0] << "," << ans[1];
return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////