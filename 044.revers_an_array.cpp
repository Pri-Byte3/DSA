/*
Write a C++ program to reverse an array in-place.
Example:
Input: arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}
Output: {9, 8, 7, 6, 5, 4, 3, 2, 1}
The function should swap elements without using extra space.
*/

#include <iostream>
using namespace std;

void reverse_an_array(int arr[],  int sz){
    int start = 0, end = sz-1;
    for(int i = 0; i < sz; i++){
        while(start < end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}
int main () {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sz = 9;
    reverse_an_array(arr, sz);
    for(int i = 0; i < sz; i++){
        cout << arr[i] << " " ;
    }
    cout << "\n";
return 0;
}