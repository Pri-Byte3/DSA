/*
Write a C++ program to sort an array using the Insertion Sort algorithm.

Problem Statement:
You are given an unsorted array of integers.
Use Insertion Sort to sort the array in ascending order by repeatedly taking each element 
and inserting it into its correct position within the sorted portion of the array.

Example:
Input:
    arr = {2, 4, 1, 3, 5}
Output:
    1  2  3  4  5
*/

#include <iostream>
using namespace std;


void insertion_sort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
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
insertion_sort(arr, n);
printarr(arr, n);
return 0;
}