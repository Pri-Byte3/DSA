// Leet code [53. Maximum Subarray]{Medium}

/*
Write a C++ program to find the maximum sum of a contiguous subarray using different approaches:
1. Brute Force Approach: Generates all possible subarrays and finds the one with the maximum sum (O(n^2) time complexity).
2. Kadane's Algorithm: Optimized approach that finds the maximum subarray sum in O(n) time.
Example:
Input: arr = {3, -4, 5, 4, -1, 7, -8}
Output: 12
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// //printing all sub array [O(n^3)]
// #include <iostream>
// using namespace std;
// int main () {
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};
//     for(int st = 0; st < n; st++){
//         for(int end = st; end < n; end++){
//             for(int i = st; i <= end; i++){
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// // Brute Force Approch for Maximum of Sub array sum [O(n^2)]
// #include <iostream>
// using namespace std;

// int max_subarr_sum(int arr[], int n){
//     int maxsum = INT_MIN;
//     for(int st = 0; st < n; st++){
//         int currentsum = 0;
//         for(int end = st; end < n; end++){
//             currentsum += arr[end];
//             maxsum = max(currentsum, maxsum);
//         }
//     }
//     return maxsum;
// }
// int main () {
//     int n = 7;
//     int arr[7] = {3, -4, 5, 4, -1, 7, -8};
//     cout << max_subarr_sum(arr,n) << "\n";
//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Kadane's Algorithm for Maximum of Sub array sum [O(n)]
#include <iostream>
using namespace std;

int max_subarr_sum(int arr[], int n){
    int ms = INT_MIN;
    int cs = 0;    
    for(int i = 0; i < n; i++){
            cs += arr[i];
            ms = max(cs, ms);
            if(cs < 0){
                cs = 0;
            }
        }
    return ms;
}
int main () {
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    cout << max_subarr_sum(arr,n) << "\n";
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////