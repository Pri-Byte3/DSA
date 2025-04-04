/*  
Write a C++ program to print a right-angled triangle pattern using asterisks.  
For example, if N = 4, the output should be:  

*  
**  
***  
****  
*/  


#include <iostream>
using namespace std; 

int main(){
    int n, i, j;
    cout << "Enter the value of n : ";
    cin >> n;
    for(i = 0; i < n; i++){
        for(j = 0; j < i+1; j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }
    return 0;
}