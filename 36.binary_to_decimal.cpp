/*
Write a program in C++ to convert a given binary number to its decimal equivalent using an iterative approach.
If the input is:
Enter the num: 1010
The output should be:
10
*/

#include <iostream>
using namespace std;

int bi_to_dec(int binary){
    int  decimal = 0, pow = 1, rem;
    while (binary > 0){
        rem = binary % 10;
        binary /=  10;
        decimal += (rem * pow);
        pow *= 2;
    }
    return decimal;
}

int main () {
    int binary;
    cout << "Enter the num : ";
    cin >> binary;
    cout << bi_to_dec(binary) <<"\n";
    

return 0;
}