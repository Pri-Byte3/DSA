/*  
Write a C++ program to check whether the entered character is an uppercase or lowercase letter.  

For example:  
If the input is 'A', the output should be:  
upper case  

If the input is 'b', the output should be:  
lower case  
*/  


#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter character : ";
    cin >> ch;

    if(ch >= 'A' && ch<= 'Z'){
        cout << "upper case\n";
    }else{
        cout << "lower case\n";
    }

    return 0;
}