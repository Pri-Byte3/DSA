/*
Write a C++ program to print a right-aligned pattern of numbers where each row contains the same number multiple times.

For example, if N = 5, the output should be:

11111
 2222
  333
   44
    5
*/

#include <iostream>
using namespace std; 

int main(){
    int n, i, j;
    cout << "Enter the value of n : ";
    cin >> n;
    
    for(i = 0; i < n; i++){
        for(j = 0; j < i; j++){
            cout << " ";
        }
        for(j = 0; j < n-i; j++){
            cout << (i+1);
        }
        
        cout << "\n";
    }
    return 0;
}