/*
Write a C++ program to check if a given number is an Armstrong number.

Problem Statement:  
An Armstrong number (also known as a Narcissistic number) is a number that is equal to the sum of the cubes of its digits.  
For a given integer `n`, determine whether it is an Armstrong number.

Example:  
Input:  
    n = 153  
Output:  
    "153 is an Armstrong number"  

Input:  
    n = 9474  
Output:  
    "9474 is an Armstrong number"  

Input:  
    n = 123  
Output:  
    "123 is not an Armstrong number"  

Note:  
- An Armstrong number for a 3-digit number is calculated as:  
  `n = d1^3 + d2^3 + d3^3` (where `d1, d2, d3` are the digits of `n`).  
- Your program should handle numbers with varying digit lengths.  
- The solution should work efficiently for large numbers.
*/

#include <iostream>
using namespace std;

bool isarmstrong(int n){
    int copyN = n;
    int sum_of_cubes = 0;

    while(n > 0){
        int dig = n % 10;
        sum_of_cubes += dig*dig*dig;
        n /= 10;
    }
    return sum_of_cubes == copyN;
}

int main () {
    int n = 16454798;

    if(isarmstrong(n)){
    cout << n << " is a armstrong number" << "\n";
    }else{
    cout << n << " is not a armstrong number" << "\n";
    }

return 0;
}