// Leet code [410. Split Array Largest Sum] {Hard}

/*
Write a C++ program to solve the "Split Array Largest Sum" problem. 

Given an array of `N` integers representing book pages and an integer `M` representing the number of students, 
the goal is to allocate books to students such that each student gets a contiguous sequence of books, 
and the maximum sum of pages assigned to any student is minimized.

Constraints:
- Each book must be allocated to exactly one student.
- Each student must receive at least one book.
- The maximum pages assigned to a student should be minimized.

Example:
Input:
    arr = {2, 1, 3, 4}, N = 4, M = 2
Output:
    5
Explanation:
    One possible allocation is {2, 1} and {3, 4}, where the maximum pages assigned is 5.
*/

#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int>& arr, int n, int m, int max_allowed_pages){
    int student = 1, pages = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > max_allowed_pages) return false;
        if((arr[i] + pages) <= max_allowed_pages){
            pages += arr[i];
        }
        else{
            student++;
            pages = arr[i];
        }
    }
    return student > m ? false : true;
}

int book_allocation(vector<int>& arr, int n, int m) {
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int st = 0, end = sum, ans = -1;
    while(st <= end){
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
vector<int> arr = {2, 1, 3, 4};
int n = 4, m = 2;
cout << book_allocation(arr, n, m) << "\n";
return 0;
}    