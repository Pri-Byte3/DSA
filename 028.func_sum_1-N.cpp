/*
Write a C++ program to define a function `sum_of1toN` that takes an integer N as an argument and returns the sum of all integers from 1 to N using a loop. 
Then, use this function in the main program to print the sum of the numbers from 1 to N, where N = 5 in this case.

Example:
Input: 5
Output: sum = 15
*/

#include <iostream>
using namespace std;

int sum_of1toN(int n){
    int sum = 0, i;
    for(i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main () {
    cout << "sum = " << sum_of1toN(5) << "\n";

return 0;
}