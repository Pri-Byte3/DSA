/*
Write a C++ program to determine whether a given number is a power of two.
Example:
Input: n = 32
Output: Power of two

Input: n = 45
Output: Not Power of two
*/

#include <iostream>
using namespace std;

int main () {
    int i, n, ans = 1;
    cout << "Enter a num : ";
    cin >> n;
    for(i = 1; ans < n; i++){
        ans *= 2;
    }
    if(ans == n){
        cout << "Power of two\n";
    }else{
        cout << "Not Power of two\n";
        }

return 0;
}