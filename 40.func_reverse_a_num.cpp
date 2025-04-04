/*
Write a C++ program to reverse the digits of a given number.
Example:
Input: n = 1234
Output: Reverse of 1234 is 4321

Input: n = 9876
Output: Reverse of 9876 is 6789
*/

#include <iostream>
using namespace std;
int reverse(int n){
    int rev = 0;
    while(n > 0){
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}
int main(){
    int n;
    cout << "Enter a num : ";
    cin >> n;
    cout << "Reverse of " << n << " is " << reverse(n) << "\n";
    return 0;
}


// 123
// 0 * 10 + 123 % 10 = 3
// 123 / 10 = 12
// 3 * 10 + 12 % 10 = 32
// 12 / 10 = 1
// 32 * 10 + 1 % 10 = 321
// 1 / 10 = 0
// 321
// so, 123 reverse is 321

