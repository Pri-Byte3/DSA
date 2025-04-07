/*
Write a C++ program to define a function `sum_of_digits` that takes an integer as input and returns the sum of its digits.
Use this function in the main program to calculate and print the sum of digits for a given number.

Example:
Input: 1234
Output: Total = 10
*/

#include <iostream>
using namespace std;

int sum_of_digits(int num){
    int last_digit ,digit_sum = 0;

    while (num > 0){
        last_digit = num % 10;
        num = num / 10;
        digit_sum += last_digit;
    }

    return digit_sum;
}

int main () {
    int num;
    cout << "Enter the value of n : ";
    cin >> num;
    cout << "Total = " << sum_of_digits(num) << "\n";
return 0;
}