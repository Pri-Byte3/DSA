/*
Write a C++ program to check whether a given number is a power of two or not using bitwise operations.
Example:
Input: n = 8
Output: Power of two

Input: n = 10
Output: Not Power of two
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a num : ";
    cin >> n;
    if(n & (n - 1)){
        cout << "Not Power of two\n";
    }else{
        cout << "Power of two\n";
    }
    return 0;
}

// 32 & 31 = 0
// 32 = 100000
// 31 = 011111
// 32 & 31 = 000000
// 32 & 31 = 0
// so, 32 is power of two
//
// 45 & 44 = 44
// 45 = 101101
// 44 = 101100
// 45 & 44 = 101100
// 45 & 44 = 44
// so, 45 is not power of two
