/*
Write a C++ program to find the smallest and largest numbers in an array.
Example:
Input: nums[] = {5, 15, 22, 1, -15, 24}
Output: 
smallest num is : -15
largest num is : 24
*/

#include <iostream>
using namespace std;

int main () {
    int size = 6;
    int nums[] = {5, 15, 22, 1, -15, 24}; 
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i < size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
        if(nums[i] > largest){
            largest = nums[i];
        }
    }
    
    cout << "smallest num is : " << smallest << "\n";
    cout << "largest num is : " << largest << "\n";

return 0;
}