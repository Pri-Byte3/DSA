/*
Write a program in C++ to demonstrate the use of bitwise operators (&, |, ^, <<, >>) with integer values.
For example:
If the input values are:
a = 6, b = 10
The output should display:
Bitwise AND: 6 & 10 = 2
Bitwise OR: 6 | 10 = 14
Bitwise XOR: 6 ^ 10 = 12
Left Shift: 10 << 2 = 40
Right Shift: 10 >> 1 = 5
*/

// NOTE : BITWISE OPERATORS WORKS ON BINARY NUMBERS

// & (bitwise AND)
// 0 & 0 = 0
// 0 & 1 = 0
// 1 & 0 = 0
// 1 & 1 = 1

// let's take an example
// a = 4 = 100
// b = 8 = 1000
// a & b
// 0100
// 1000 &
// ----
// 0000 = 0
// so, 4 & 8 = 0



// | (bitwise OR)
// 0 | 0 = 0
// 0 | 1 = 1
// 1 | 0 = 1
// 1 | 1 = 1

// let's take an example
// a = 4 = 100
// b = 8 = 1000
// a | b
// 0100
// 1000 |
// ----
// 1100 = 12
// so, 4 | 8 = 12



// ^ (bitwise XOR)
// 0 ^ 0 = 0
// 0 ^ 1 = 1
// 1 ^ 0 = 1
// 1 ^ 1 = 0

// let's take an example
// a = 4 = 100
// b = 8 = 1000
// a ^ b
// 0100
// 1000 ^
// ----
// 1100 = 12
// so, 4 ^ 8 = 12



// << (left shift)
// 10 << 2
// 10 = 1010
// 1010 << 2
// 101000 = 40
// so, 10 << 2 = 40
// Formula : a << b = a * 2^b



// >> (right shift)
// 10 >> 1
// 10 = 1010
// 1010 >> 1
// 0101 = 5
// so, 10 >> 1 = 5
// Formula : a >> b = a / 2^b






// // 6 & 10
// #include <iostream>
// using namespace std;
// int main () {
// int a = 6, b = 10;
// cout << (a & b) << "\n";
// return 0;
// }

// // 6 | 10
// #include <iostream>
// using namespace std;
// int main () {
// int a = 6, b = 10;
// cout << (a | b) << "\n";
// return 0;
// }

// // 6^10
// #include <iostream>
// using namespace std;
// int main () {
// int a = 6, b = 10;
// cout << (a ^ b) << "\n";
// return 0;
// }

// // 10 << 2
// #include <iostream>
// using namespace std;
// int main () {
// int a = 10, b = 2;
// cout << (a << b) << "\n";
// return 0;
// }

// // 10 >> 1
// #include <iostream>
// using namespace std;
// int main () {
// int a = 10, b = 1;
// cout << (a >> b) << "\n";
// return 0;
// }