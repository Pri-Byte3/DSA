/*  
Write a C++ program to calculate the sum of all multiples of 3 up to a given number N.  
For example, if N = 10, the output should be:  

Total = 18  
(As 3 + 6 + 9 = 18)  
*/  


#include <iostream>
using namespace std; 

int main(){
    int n , sum = 0 ;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i=3 ; i<=n ; i++){
        if(i%3==0){
            sum += i;
        }
    }
    
    cout << "Total = " << sum << "\n";
    return 0;
}
 