/*
Write a C++ program to find the smallest and largest numbers in an array along with their indices.
Example:
Input: nums[] = {5, 15, 22, 1, -15, 24}
Output: 
smallest num is : -15 and index num is : 4
largest num is : 24 and index num is : 5
*/

#include <iostream>
using namespace std;

int main () {
    int size = 6, sindex, lindex;
    int nums[] = {5, 15, 22, 1, -15, 24}; 
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i < size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
            sindex = i;
        }
        if(nums[i] > largest){
            largest = nums[i];
            lindex = i;
        }
    }
    cout << "smallest num is : " << smallest << " and index num is : " << sindex << "\n";
    cout << "largest num is : " << largest << " and index num is : " << lindex << "\n";

return 0;
}