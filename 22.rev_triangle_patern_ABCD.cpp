/*
Write a C++ program to print a pattern where each row starts with a letter and the letters in each row decrease.

For example, if N = 5, the output should be:

A 
B A 
C B A 
D C B A 
E D C B A
*/

#include <iostream>
using namespace std; 

int main(){
    int n, i, j;
    char ch;
    cout << "Enter the value of n : ";
    cin >> n;
    
    for(i = 0; i < n; i++){
        ch = 'A'+i;
        for(j = 0; j < i+1; j++){
            cout << ch-- << " ";
        }
        cout << "\n";
    }
    return 0;
}