/*
Write a C++ program to find the largest and smallest elements in an array and swap their positions.
Example:
Input: arr[] = {5, 15, 22, 1, -15, 24}
Output:
Before swapping: 5 15 22 1 -15 24
After swapping: 5 15 22 1 24 -15
The program should identify the indices of the smallest and largest elements and then swap them.
*/

#include <iostream>
using namespace std;

void swapping_btw_largest_smallest_num(int arr[], int sz){
    int smallest = 0;
    int largest = 0;

    for(int i = 0; i < sz; i++){
        if(arr[i] < arr[smallest]){
            smallest = i;
        }
        if(arr[i] > arr[largest]){
            largest = i;
        }
    }
    swap(arr[smallest], arr[largest]);
}

int main () {
    int sz = 6;
    int arr[] = {5, 15, 22, 1, -15, 24}; 
    cout << "Before swapping : ";
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    } 
    cout << "\n";
    swapping_btw_largest_smallest_num(arr, sz);
    cout << "After swapping : ";
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }    
    cout << "\n";
return 0;
}