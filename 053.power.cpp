// Leet code [50. Pow(x, n)]{Medium}
/*
Write a program in C++ to implement the power function pow(x, n), 
which calculates x raised to the power n (i.e., x^n).

The function should:
1. Handle positive and negative exponents.
2. Use an efficient O(log n) approach.

If the input is:
Enter the num: 2
Enter the power: 10

The output should be:
1024
*/

#include <iostream>
using namespace std;

double myPow(double x, int n) {
        long binary = n;
        double ans = 1;
        while(binary < 0){
            x = 1/x;
            binary = -binary;
        }
        while(binary > 0){
            if(binary % 2 == 1){
                ans *= x;
            }
            binary /= 2;
            x *= x;
        }
        return ans;

    }

int main () {
    double x;
    int n;
    cout << "Enter the num : ";
    cin >> x;
    cout << "Enter the power : ";
    cin >> n;
    cout << myPow(x, n) << "\n";

return 0;
}