/*  
Write a C++ program to print an N × N pattern where each row contains numbers from 1 to N.  
For example, if N = 3, the output should be:  

1 2 3  
1 2 3  
1 2 3  
*/  


#include <iostream>
using namespace std; 

int main(){
    int n , i , j ;
    cout << "Enter the value of n : ";
    cin >> n;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}
 