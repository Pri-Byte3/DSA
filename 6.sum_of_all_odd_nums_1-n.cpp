/*  
Write a C++ program to calculate the sum of all odd numbers from 1 to N.  

For example:  
If N = 5, the output should be:  
Total = 9  

(Explanation: 1 + 3 + 5 = 9)  
*/  


#include <iostream>
using namespace std; 

int main(){
    int n , sum = 0 ;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i=1 ; i<=n ; i++){
        if(i%2==1){
            sum += i;
        }
    }
    
    cout << "Total = " << sum << "\n";
    return 0;
}
 