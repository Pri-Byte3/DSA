// Quick Sort Algorithm {Divide and Conquer}
/*
Problem Statement:
Implement the Quick Sort algorithm to sort an array of integers in ascending order.

Quick Sort is a divide-and-conquer algorithm. It selects a 'pivot' element and partitions
the array into two halves such that elements less than the pivot are on the left, and
elements greater are on the right. It recursively applies the same logic to the subarrays.

Example:
Input:  [12, 31, 35, 8, 32, 17]
Output: [8, 12, 17, 31, 32, 35]

Approach:
1. Choose the last element as the pivot.
2. Partition the array around the pivot so that smaller elements are on the left,
   and larger elements are on the right.
3. Recursively sort the left and right subarrays.

Time Complexity:
- Best Case: O(n log n) — when pivot divides array evenly
- Average Case: O(n log n)
- Worst Case: O(n²) — when the array is already sorted or all elements are the same

Space Complexity: O(log n) — due to recursive call stack (in-place sorting)
*/

#include<iostream>
using namespace std;

int partition(vector<int> &arr, int st, int end){
    int idx = st-1, pivot = arr[end];
    for(int j=st; j<end; j++){
        if(arr[j] < pivot){
            idx++;
            swap(arr[idx], arr[j]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}

void quick_sort(vector<int> &arr, int st, int end){
    if(st < end){
        int pivot_idx = partition(arr, st, end);

        quick_sort(arr, st, pivot_idx-1); // left
        quick_sort(arr, pivot_idx+1, end); // right
    }
}

int main(){
    vector<int> arr = {12, 31, 35, 8, 32, 17};

    quick_sort(arr, 0, arr.size()-1);
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}