/*
Write a C++ program to print a right-angled triangle pattern with decreasing numbers in each row.

For example, if N = 5, the output should be:

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/

#include <iostream>
using namespace std; 

int main(){
    int n, i, j;
    cout << "Enter the value of n : ";
    cin >> n;

    for(i = 0; i < n; i++){
        for(j = i+1; j > 0; j--){
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}