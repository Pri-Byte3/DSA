// Leet code [410. Split Array Largest Sum] {Hard}

/*
Write a C++ program to solve the "Painter's Partition Problem".

Problem Statement:
You are given an array of `N` elements where each element represents the length of a board, 
and you have `M` painters. Each painter can only paint contiguous boards. 
You need to find the minimum amount of time required to paint all the boards if each unit length takes 1 unit of time.
The goal is to minimize the maximum time taken by any single painter.

Example:
Input:
    arr = {40, 30, 10, 20}, N = 4, M = 2
Output:
    50
Explanation:
    One optimal allocation is: 
    - Painter 1 paints boards with lengths {40, 10} (total 50)
    - Painter 2 paints boards with lengths {30, 20} (total 50)
    So, the minimized maximum time is 50.
*/

#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int> arr, int n, int m, int max_allowed_unit){
    int painter = 1, unit = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > max_allowed_unit) return false;
        if((arr[i] + unit) <= max_allowed_unit){
            unit += arr[i];
        }
        else{
            unit = arr[i];
            painter++;
        }
    }
    return painter > m ? false : true; 
}

int painter_partition(vector<int> arr, int n, int m){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int st = 0, end = sum, ans = -1 ;
    while (st <= end){
        int mid = st + (end - st)/2;
        if(isvalid(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    return ans;
}

int main () {
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;
    cout << painter_partition(arr, n, m) << "\n"; 
return 0;
}