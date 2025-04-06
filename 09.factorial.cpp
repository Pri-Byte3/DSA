/*  
Write a C++ program to calculate the factorial of a given number N.  
For example, if N = 5, the output should be:  

Total = 120  
*/  


#include <iostream>
using namespace std; 

int main(){
    int n , fact = 1 ;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i=1 ; i<=n ; i++){
        //cout << i << " ";
        fact *= i;
    }
    
    cout << "Total = " << fact << "\n";
    return 0;
}
 