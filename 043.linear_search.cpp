/*
Write a C++ program to implement a linear search algorithm to find the index of a target element in an array.
Example:
Input: arr[] = {4, 2, 7, 8, 1, 2, 5}, target = 8
Output: 3
If the target element is not found, return -1.
*/

#include <iostream>
using namespace std;

int linear_search(int arr[], int sz, int target){
    for(int i = 0; i < sz; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main () {
    int sz = 7, target = 8;
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    cout << linear_search(arr, sz, target) << "\n";
return 0;
}