// Merge Sort Algorithm {Divide and Conquer}
/*
Problem Statement:
Implement the Merge Sort algorithm to sort an array of integers in ascending order.

Merge Sort is a recursive, divide-and-conquer algorithm that divides the input array
into two halves, sorts them recursively, and then merges the two sorted halves.

Example:
Input:  [12, 31, 35, 8, 32, 17]
Output: [8, 12, 17, 31, 32, 35]

Approach:
1. Recursively divide the array into two halves until each subarray has one element.
2. Merge the sorted subarrays to produce new sorted arrays until the entire array is merged.

Time Complexity:
- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n log n)

Space Complexity: O(n) — due to the temporary array used during merging.
*/

#include<iostream>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end){
    vector<int> temp;
    int i = st, j = mid+1;
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx=0; idx<temp.size(); idx++){
        arr[idx+st] = temp[idx];
    }
}

void merge_sort(vector<int> &arr, int st, int end){
    if(st < end){
        int mid = st + (end-st)/2;
        merge_sort(arr, st, mid); // left
        merge_sort(arr, mid+1, end); // right

        merge(arr, st, mid, end);
    }
}

int main(){
    vector<int> arr = {12, 31, 35, 8, 32, 17};

    merge_sort(arr, 0, arr.size()-1);
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}