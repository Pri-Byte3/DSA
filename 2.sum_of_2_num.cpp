/*  
Write a C++ program to take two integers as input from the user and print their sum.  

For example, if a = 3 and b = 4, the output should be:  
Sum = 7  
*/  


#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout << "Enter a : ";
    cin >> a;

    cout << "Enter b : ";
    cin >> b;

    int sum = a+b;
    cout << "Sum = " << sum << "\n";
    return 0;
}