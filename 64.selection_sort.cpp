/*
Write a C++ program to sort an array using the Selection Sort algorithm.

Problem Statement:
You are given an array of integers.
Use the Selection Sort technique to arrange the elements in ascending order.
In each iteration, select the smallest element from the unsorted portion and swap it with the current position.

Example:
Input:
    arr = {2, 4, 1, 3, 5}
Output:
    1  2  3  4  5
*/

#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int smallest_idx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[smallest_idx]){
                smallest_idx = j;
            }
        }
        swap(arr[i], arr[smallest_idx]);
    }
}
void printarr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    cout << "\n";
}

int main () {
int arr[] = {2, 4, 1, 3, 5}; 
int n = 5;
selection_sort(arr, n);
printarr(arr, n);
return 0;
}