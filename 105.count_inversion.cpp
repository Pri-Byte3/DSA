// Count Inversions in an Array {Divide & Conquer}
/*
Problem Statement:
Given an array of integers, count the number of **inversions** in the array.
An inversion is a pair of indices (i, j) such that i < j and arr[i] > arr[j].

You must return the total count of such inversions.

Example:
Input:  [6, 3, 5, 2, 7]
Output: 5

Explanation: The inversions are:
(6,3), (6,5), (6,2), (3,2), (5,2)

Approach:
1. **Brute Force (O(n²))**:
   - Check every pair (i, j) with i < j and count if arr[i] > arr[j].
2. **Optimized (O(n log n))**:
   - Use a modified Merge Sort to count inversions during the merge step.

Time Complexity:
- Brute Force: O(n²)
- Optimized Merge Sort: O(n log n)

Space Complexity:
- Brute Force: O(1)
- Merge Sort: O(n) for temporary array + O(log n) stack space
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Brute Force Approach [O(n^2)]
#include<iostream>
using namespace std;

int count_inversion(vector<int> arr){
    int count = 0;
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> arr = {6, 3, 5, 2, 7};
    cout << count_inversion(arr) << endl;
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Optimized Approach [O(n*log(n))]
#include<iostream>
using namespace std;

int merge(vector<int> &arr, int st, int mid, int end){
    vector<int> temp;
    int i = st, j = mid+1;
    int count = 0;
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
            count += (mid - i + 1);
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
    return count;
}

int count_inversion(vector<int> &arr, int st, int end){
    if(st < end){
        int mid = st + (end-st)/2;
        int left_count = count_inversion(arr, st, mid); // left
        int right_count = count_inversion(arr, mid+1, end); // right

        int count = merge(arr, st, mid, end);
        return left_count + right_count + count;
    }
    return 0;
}

int main(){
    vector<int> arr = {12, 31, 35, 8, 32, 17};

    cout << count_inversion(arr, 0, arr.size()-1) << endl;
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////