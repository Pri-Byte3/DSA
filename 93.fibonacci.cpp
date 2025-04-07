// LeetCode [509. Fibonacci Number] {Easy}
/*
Problem Statement:
The Fibonacci numbers, commonly denoted `F(n)`, form a sequence where each number is the sum of the two preceding ones.

The sequence starts from:
    F(0) = 0,
    F(1) = 1

Given `n`, calculate and return `F(n)`.

Example 1:
Input:
    n = 2
Output:
    1
Explanation:
    F(2) = F(1) + F(0) = 1 + 0 = 1

Example 2:
Input:
    n = 5
Output:
    5
Explanation:
    F(5) = F(4) + F(3) = 3 + 2 = 5

Constraints:
- `0 <= n <= 30`

Knowledge Concept:
This is a classic **recursion** problem. The Fibonacci sequence is defined recursively:
    F(n) = F(n-1) + F(n-2)
However, the recursive method has exponential time complexity: O(2^n).
Optimized approaches include **memoization** or **bottom-up dynamic programming (DP)** for O(n) time.
*/

#include <iostream>
using namespace std;

int fib(int n) {
    if(n == 0 || n == 1){
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main () {
    cout << fib(5) << endl;
return 0;
}