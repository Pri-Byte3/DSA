/*  
Write a C++ program to determine whether a given number N is a prime number.  
A prime number is a number greater than 1 that has no divisors other than 1 and itself.  

For example:  
If N = 11, the output should be:  
prime no  

If N = 10, the output should be:  
non prime no  
*/  


// #include <iostream>
// using namespace std;

// int main(){
//     int n , i;
//     cout << "Enter number : ";
//     cin >> n;
//     for(i=2 ; i*i <= n ; i++){
//         if(n%i == 0 ){
//             cout << "Not a Prime number\n";
//             break;
//         }else{
//             cout << "Prime number\n";
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main (){
    int n = 11;
    
    bool isPrime = true;
    for(int i=2;i*i<=n; i++) {
        if(n % i == 0){ //non prime
            isPrime = false;
            break;
        }
    }    
    if(isPrime == true)  {
        cout << "prime no\n";
    } else {
    cout << "non prime no\n";
    }
    return 0;
}    