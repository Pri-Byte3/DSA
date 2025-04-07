/*
Write a program in C++ to convert a given decimal number to its binary equivalent using an iterative approach.
If the input is:
Enter the num: 10
The output should be:
1010
*/

#include <iostream>
using namespace std;

int dec_to_bi(int decimal){
    int  binary = 0, pow = 1, rem;
    while (decimal > 0){
        rem = decimal % 2;
        decimal = decimal / 2;
        binary += (rem * pow);
        pow *= 10;
    }
    return binary;
}

int main () {
    int decimal;
    cout << "Enter the num : ";
    cin >> decimal;
    cout << dec_to_bi(decimal) <<"\n";
    
return 0;
}