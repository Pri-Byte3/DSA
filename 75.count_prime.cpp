// Leet code [204. Count Primes] {Medium}

/*
Write a C++ program to count the number of prime numbers less than a given integer `n`.

Problem Statement:  
You are given an integer `n`. Your task is to count how many prime numbers exist strictly less than `n`.

Example:  
Input:  
    n = 10  
Output:  
    4  
Explanation: The prime numbers less than 10 are [2, 3, 5, 7].

Input:  
    n = 0  
Output:  
    0  

Input:  
    n = 1  
Output:  
    0  

Input:  
    n = 50  
Output:  
    15  

Note:  
- A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.  
- The function should be optimized to handle large values of `n` efficiently.
*/
// Sieve of Eratosthenes

#include <iostream>
using namespace std;

int countPrimes(int n) {
    vector<bool> isprime(n+1, true);
    int count = 0;
    for(int i = 2; i < n; i++){
        if(isprime[i]){
            count++;
        }
        for(int j = i*2; j < n; j += i){
            isprime[j] = false;
        }
    }
    return count;
}

int main () {
    int n = 50;
    cout << countPrimes(n) << "\n";

return 0;
}