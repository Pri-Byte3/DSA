/*
Write a program in C++ to find the nth Fibonacci number using an iterative approach.
If N = 6, then the output should be:
8
*/

#include <iostream>
using namespace std;

int fibbo(int n){
    if (n == 0) return 0;  // Base case: F(0) = 0
    if (n == 1) return 1;  // Base case: F(1) = 1
    
    int a = 0, b = 1, fib;
    
    for(int i = 2; i <= n; i++){
        fib = a + b;
        a = b;
        b = fib;
    }
    
    return fib;
}

int main () {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << fibbo(n) << "\n";
    return 0;
}
