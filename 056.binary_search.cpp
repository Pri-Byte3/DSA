/*
Write a program in C++ to implement the Binary Search algorithm using both 
iterative and recursive methods.

The program should:
1. Take a sorted array and a target value as input.
2. Search for the target value in the array.
3. Return the index of the target if found; otherwise, return -1.

If the input is:
Array: [1, 3, 6, 8, 12, 21, 30]
Target: 8

The output should be:
Iterative Search: 3
Recursive Search: 3

(Explanation: The element 8 is found at index 3 in the given sorted array.)
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Binary search by Iterative method
#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> &arr, int tar){
    int st = 0, end = arr.size() - 1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(tar < arr[mid]){
            end = mid - 1;
        }
        else if(tar > arr[mid]){
            st = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main () {
vector<int> arr = {1, 3, 6, 8, 12, 21, 30};
int tar = 120;
cout << binary_search(arr, tar) << "\n";
return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Binary search by Recursive method
#include <iostream>
#include <vector>
using namespace std;

int binary_search_recursive(vector<int> &arr, int tar, int st, int end){
    
    if(st <= end){
        int mid = st + (end - st)/2;
        if(tar < arr[mid]){
            return binary_search_recursive(arr, tar, st, mid - 1);
        }
        else if(tar > arr[mid]){
            return binary_search_recursive(arr, tar, mid + 1, end);
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main () {
vector<int> arr = {1, 3, 6, 8, 12, 21, 30};
int tar = 120;
int st = 0, end = arr.size() - 1;
cout << binary_search_recursive(arr, tar, st, end) << "\n";
return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////