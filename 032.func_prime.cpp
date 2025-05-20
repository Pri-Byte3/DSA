/*
Write a C++ program to check if a given number is prime or not. 
A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.

Example:
Input:
Enter the value of n : 7

Output:
prime no
*/

#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0){ //non prime
            return false;
        }
    }
    return true;
}
    
int main () {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    if(isPrime(n))  {
        cout << "prime no\n";
    } else {
    cout << "non prime no\n";
    }
return 0;
}