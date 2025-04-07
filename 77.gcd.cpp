/*
Write a C++ program to compute the Greatest Common Divisor (GCD) of two numbers.

Problem Statement:  
You are given two positive integers `a` and `b`.  
Your task is to compute the GCD of `a` and `b` using:  
1. **Iterative approach** (loop-based Euclidean algorithm).  
2. **Recursive approach** (using function recursion).  

The GCD (Greatest Common Divisor) of two numbers is the largest integer that divides both numbers without leaving a remainder.

Example:  
Input:  
    a = 20, b = 24  
Output:  
    4  

Input:  
    a = 36, b = 60  
Output:  
    12  

Input:  
    a = 17, b = 31  
Output:  
    1  

Note:  
- The iterative approach should use a loop to repeatedly apply `a %= b` or `b %= a`.  
- The recursive approach should follow the Euclidean algorithm:  
  `GCD(a, b) = GCD(b, a % b)` until `b == 0`.  
- Your program should efficiently handle large numbers.
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// GCD using Iteration
#include <iostream>
using namespace std;

int gcd(int a, int b){
    while(a > 0 && b > 0){
        if(a > b){
            a %= b;
        }else{
            b %= a;
        }
    }
    if(a == 0) return b;
    return a;
}

int main(){
    int a = 20, b = 24;
    cout << gcd(a,b) << "\n";
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// GCD using Recursion [Euclidean Algorithm]
#include <iostream>
using namespace std;

int gcdRec(int a, int b){
    if(b == 0) return a;
    return gcdRec(b, a % b);
}

int main(){
    int a = 20, b = 24;
    cout << gcdRec(a,b) << "\n";
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////