// Leet code [852. Peak Index in a Mountain Array] {Medium}

/*
Write a C++ program to find the peak index in a mountain array.

A mountain array is defined as an array where:
1. The elements first strictly increase and then strictly decrease.
2. The peak element is the highest point in the array.

The program should:
1. Take a mountain array as input.
2. Implement an efficient algorithm using binary search.
3. Return the index of the peak element.

If the input is:
Array: [0, 1, 0]

The output should be:
1

(Explanation: The peak element is 1, which is at index 1 in the given array.)
*/

#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1, end = arr.size() - 2, mid;
        while(st <= end){
            mid = st + (end - st)/2;
            if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid-1]){
                return mid;
            }
            else if(arr[mid] > arr[mid-1]){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }

int main () {
vector<int> arr = {0,1,0};
cout << peakIndexInMountainArray(arr) << "\n";
return 0;
}    