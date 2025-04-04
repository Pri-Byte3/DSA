/*
Write a C++ program to calculate the Least Common Multiple (LCM) of two numbers.

Problem Statement:  
You are given two positive integers `a` and `b`.  
Your task is to compute the LCM of `a` and `b`.  
The LCM of two numbers is the smallest positive integer that is divisible by both `a` and `b`.

Example:  
Input:  
    a = 20, b = 28  
Output:  
    140  
Explanation: The LCM of 20 and 28 is 140.

Input:  
    a = 6, b = 8  
Output:  
    24  

Input:  
    a = 7, b = 5  
Output:  
    35  

Note:  
- You should first compute the Greatest Common Divisor (GCD) using recursion.  
- The formula used is: `LCM(a, b) = (a * b) / GCD(a, b)`.  
- Ensure the function handles large values efficiently.
*/

#include <iostream>
using namespace std;

int gcdRec(int a, int b){
    if(b == 0) return a;
    return gcdRec(b, a % b);
}

int lcm(int a, int b){
    int gcd = gcdRec(a,b);
    return (a*b)/gcd;
}
int main(){
    int a = 20, b = 28;
    cout << lcm(a,b) << "\n";
    return 0;
}