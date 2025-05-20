/*
Write a C++ program to print Floyd's Triangle pattern with consecutive characters.

For example, if N = 5, the output should be:

A 
B C 
D E F 
G H I J 
K L M N O
*/

#include <iostream>
using namespace std; 

int main(){
    int n, i, j;
    char ch;
    cout << "Enter the value of n : ";
    cin >> n;
    ch = 'A';

    for(i = 0; i < n; i++){
        for(j = 0; j < i+1; j++){
            cout << ch << " ";
            ch++ ;
        }
        cout << "\n";
    }
    return 0;
}
