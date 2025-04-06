/*  
Write a C++ program to calculate the sum of all numbers from 1 to N.  

For example:  
If N = 5, the output should be:  
Total = 15  

(Explanation: 1 + 2 + 3 + 4 + 5 = 15)  
*/  


#include <iostream>
using namespace std; 

int main(){
    int n , sum = 0 ;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i=1 ; i<=n ; i++){
        //cout << i << " ";
        sum += i;
    }
    
    cout << "Total = " << sum << "\n";
    return 0;
}
 