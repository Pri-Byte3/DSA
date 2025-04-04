/*  
Write a C++ program to print a square pattern of asterisks of size N × N.  
For example, if N = 3, the output should be:  

* * *  
* * *  
* * *  
*/  


#include <iostream>
using namespace std; 

int main(){
    int n, i, j;
    cout << "Enter the value of n : ";
    cin >> n;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }
    return 0;
}