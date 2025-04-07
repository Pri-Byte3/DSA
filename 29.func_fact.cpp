/*
Write a C++ program to define a function `fact_of_N` that takes an integer N as an argument and returns the factorial of N using a loop.
Then, use this function in the main program to print the factorial of the number N, where N = 5 in this case.

Example:
Input: 5
Output: factorial = 120
*/

#include <iostream>
using namespace std;

int fact_of_N(int n){
    int fact = 1, i;
    for(i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main () {
    cout << "factorial = " << fact_of_N(5) << "\n";

return 0;
}