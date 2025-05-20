/*  
Write a C++ program to print an N × N pattern of consecutive numbers starting from 1.  
For example, if N = 3, the output should be:  

1 2 3  
4 5 6  
7 8 9  
*/  


#include <iostream>
using namespace std; 

int main(){
    int n, i, j, num;
    cout << "Enter the value of n : ";
    cin >> n;
    num = 1;
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            cout << num << " ";
            num++ ;
        }
        cout << "\n";
    }
    return 0;
}