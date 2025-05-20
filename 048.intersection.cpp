/*
Write a C++ program to find and print the intersection of two arrays.
Example:
Input: 
arr1[] = {1, 5, 3, 9, 8}
arr2[] = {1, 4, 6, 3, 5}
Output: Intersection values: 1 5 3
The program should iterate through both arrays and print only those elements that appear in both.
*/

#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int sz1, int sz2) {
    for (int i = 0; i < sz1; i++) {
        for (int j = 0; j < sz2; j++) {
            if (arr1[i] == arr2[j]) { // Check for common elements
                cout << arr1[i] << " ";
                break; // Exit the inner loop once a match is found
            }
        }
    }
}

int main() {
    int arr1[] = {1, 5, 3, 9, 8};
    int arr2[] = {1, 4, 6, 3, 5};
    int sz1 = sizeof(arr1) / sizeof(arr1[0]);
    int sz2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Intersection values: ";
    intersection(arr1, arr2, sz1, sz2);
    cout << endl;
    return 0;
}
