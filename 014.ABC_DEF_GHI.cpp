/*  
Write a C++ program to print an N × N pattern of consecutive uppercase letters starting from 'A'.  
For example, if N = 3, the output should be:  

A B C  
D E F  
G H I  
*/  


#include <iostream>
using namespace std; 

int main(){
    int n, i, j;
    char ch;
    cout << "Enter the value of n : ";
    cin >> n;
    ch = 'A';
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            cout << ch << " ";
            ch++ ;
        }
        cout << "\n";
    }
    return 0;
}
