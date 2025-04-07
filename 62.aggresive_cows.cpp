// Leet code [1552. Magnetic Force Between Two Balls] {Medium}
/*
Write a C++ program to determine the largest minimum distance between any two balls placed in stalls.

Problem Statement:
You are given `N` stalls positioned along a straight line (represented as an array). 
You need to place `C` balls in these stalls such that the minimum distance between any two balls is as large as possible.
Find that maximum minimum distance.

Example:
Input:
    arr = {1, 2, 8, 4, 9}, N = 5, C = 3
Output:
    3
Explanation:
    One of the best placements is placing balls at positions 1, 4, and 8. 
    The minimum distance between any two placed balls is 3.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool ispossible(vector<int>& arr, int n, int c, int min_allowed_distance){
    int cows = 1, last_stall_pos = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] - last_stall_pos >= min_allowed_distance){
            cows++;
            last_stall_pos = arr[i];
        }
        if(cows == c) return true;
    }
    return false;    
}

int min_distance(vector<int>& arr, int n, int c) {
    sort(arr.begin(), arr.end());
    int st = 1, end = arr[n - 1] - arr[0], ans = -1;
    while(st <= end){ 
        int mid = st + (end - st)/2;
        if(ispossible(arr, n, c, mid)){
            ans = mid;
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    
    return ans;
}

int main () {
vector<int> arr = {1, 2, 8, 4, 9};
int n = arr.size(), c = 3;
cout << min_distance(arr, n, c) << "\n";
return 0;
}    