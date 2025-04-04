/*
Write a C++ program to print all prime numbers from 1 to N. 
Prime numbers are those which are greater than 1 and have no divisors other than 1 and themselves.

Example:
Input:
Enter the value of n : 10

Output:
The prime numbers from 1 to 10 are:
2 3 5 7
*/

#include <iostream>
using namespace std;


bool isPrime(int n){
    for(int i=2;i*i<=n; i++) {
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
    cout << "The prime number from 1 to " << n << " are : \n";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << "\n";
return 0;
}