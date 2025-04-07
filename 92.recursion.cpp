// Recursion: Print numbers from n to 1
/*
Problem Statement:
Given a number `n`, write a recursive function to print numbers from `n` to `1`.

Example:
Input:
    n = 5
Output:
    5 4 3 2 1

Constraints:
- 1 <= n <= 10^4

Knowledge Concept:
This problem helps in understanding the **recursive call stack** and **backtracking** order.
Each recursive call prints and then proceeds to the next smaller value.

Time Complexity: O(n)
Space Complexity: O(n)
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Print 1 to n numbers using Recursion
#include <iostream>
using namespace std;

void print_Num(int n) {
    if (n == 1) {
        cout << "1\n";
        return;
    }
    cout << n << " ";
    print_Num(n - 1); 
}

int main() {
    print_Num(5); 
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Recursion: Factorial of a number
/*
Problem Statement:
Given a number `n`, write a recursive function to calculate the **factorial of n**.
Factorial is defined as:
    factorial(n) = n * factorial(n-1)
    factorial(0) = 1

Example:
Input:
    n = 5
Output:
    120

Constraints:
- 0 <= n <= 20

Knowledge Concept:
This classic recursion example shows **recursive tree depth** and is useful in learning **mathematical recursion**.

Time Complexity: O(n)
Space Complexity: O(n)
*/

// Factorial of nth number using Recursion
#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

int main () {
    cout << factorial(5) << "\n";
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Recursion: Sum of first n natural numbers
/*
Problem Statement:
Given a number `n`, write a recursive function to return the **sum of the first `n` natural numbers**.

Example:
Input:
    n = 5
Output:
    15
Explanation:
    1 + 2 + 3 + 4 + 5 = 15

Constraints:
- 1 <= n <= 10^4

Knowledge Concept:
This is a simple recursive approach that demonstrates how **accumulation happens through return values**.

Time Complexity: O(n)
Space Complexity: O(n)
*/

// Sum of n numbers using Recursion
#include <iostream>
using namespace std;

int sum(int n){
    if(n == 1){
        return 1;
    }
    return n + sum(n-1);
}

int main () {
    cout << sum(5) << "\n";
return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////