/*
Write a C++ program to find and print all unique elements in an array.
Example:
Input: arr[] = {1, 4, 6, 3, 5, 3, 6, 2, 7, 3}
Output: Unique values: 1 4 5 2 7
The program should iterate through the array and print only those elements that appear exactly once.
*/

#include <iostream>
using namespace std;

void unique(int arr[], int sz) {
    for (int i = 0; i < sz; i++) {
        bool isUnique = true;
        for (int j = 0; j < sz; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {1, 4, 6, 3, 5, 3, 6, 2, 7, 3};
    int sz = sizeof(arr) / sizeof(arr[0]);
    cout << "Unique values: ";
    unique(arr, sz);
    cout << endl;
    return 0;
}
