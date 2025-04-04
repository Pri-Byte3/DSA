// Leet code [540. Single Element in a Sorted Array] {Medium}

/*
Write a C++ program to find the single non-duplicate element in a sorted array.

The given array:
1. Contains only positive integers.
2. Has all elements appearing exactly twice, except for one unique element.
3. Is sorted in increasing order.

The program should:
1. Take a sorted array as input.
2. Implement an efficient algorithm using binary search.
3. Return the single element that appears only once.

If the input is:
Array: [1,1,2,3,3,4,4,8,8]

The output should be:
2

(Explanation: All elements appear twice except for 2, which appears once.)
*/

#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums[0];

        int st = 0, end = n - 1;
        while(st <= end){
            int mid = st + (end - st)/2;

            if(mid == 0 && nums[0] != nums[1]) return nums[mid];

            if(mid == end && nums[n - 1] != nums[n - 2]) return nums[n - 1];

            if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) return nums[mid];
            
            if(nums[mid] == nums[mid - 1]){
                if(mid % 2 == 0){
                    end = mid - 1;
                }else{
                    st = mid + 1;
                }
            }
            else{
                if(mid % 2 == 0){
                    st = mid + 1;
                }else{
                    end = mid - 1;
                }
            }
        }
        return -1;
    }

int main () {
vector<int> nums = {1,1,2,3,3,4,4,8,8};
cout << singleNonDuplicate(nums) << "\n";
return 0;
} 