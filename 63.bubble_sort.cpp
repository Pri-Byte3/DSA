/*
Write a C++ program to sort an array using the Bubble Sort algorithm.

Problem Statement:
You are given an array of integers. 
Implement the Bubble Sort technique to sort the array in ascending order. 
Optimize the sorting process by stopping early if no swaps are made in a pass (early termination).

Example:
Input:
    arr = {2, 4, 1, 3, 5}
Output:
    1  2  3  4  5
*/

#include <iostream>
using namespace std;


void bubble_sort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        bool isswap = false;
        for(int j = 0; j < n - 1 -i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isswap = true;
            }
        }
        if(!isswap){
            return;
        }
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
bubble_sort(arr, n);
printarr(arr, n);
return 0;
}