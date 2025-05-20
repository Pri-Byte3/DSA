/*
Write a C++ program to print a right-aligned triangle pattern of characters where each row contains the same character repeated multiple times.

For example, if N = 5, the output should be:

AAAAA
 BBBB
  CCC
   DD
    E
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
        for(j = 0; j < i; j++){
            cout << " ";
        }
        for(j = 0; j < n-i; j++){
            cout << ch;
        }
        
        cout << "\n";
        ch++;
    }
    return 0;
}


