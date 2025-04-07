/*
Write a C++ program to calculate the binomial coefficient (nCr) using a custom function to calculate the factorial of a number. 
The program should take `n` and `r` as input from the user and calculate the value of nCr using the formula:
nCr = n! / (r! * (n - r)!)

Example:
Input: 
Enter the value of n : 5
Enter the value of r : 2

Output: 
nCr = 10
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

int fact_of_r(int r){
    int fact = 1, i;
    for(i = 1; i <= r; i++){
        fact *= i;
    }
    return fact;
}

int fact_of_n_r(int m){
    int fact = 1, i;
    for(i = 1; i <= m; i++){
        fact *= i;
    }
    return fact;
}

int main () {
    int n, r, m;
    
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of r : ";
    cin >> r;
    m = n-r;
    cout << "nCr = " << (fact_of_N(n) / (fact_of_r(r) * fact_of_n_r(m))) << "\n";

return 0;
}