/*
Write a C++ program to print a pyramid pattern of numbers such that each row contains ascending numbers followed by descending numbers.

For example, if N = 5, the output should be:

    1
   121
  12321
 1234321
123454321
*/

#include <iostream>
using namespace std; 

int main(){
    int n, i, j;
    cout << "Enter the value of n : ";
    cin >> n;

    for(i = 0; i < n; i++){
        for(j = 0; j < n-i-1; j++){
            cout << " ";
        }
        for(j = 1; j <= i+1; j++){
            cout << j;
        }
        for(j = i; j > 0; j--){
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}