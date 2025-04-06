/*  
Write a C++ program to print the numbers from 1 to 5 using a while loop.  

For example, the output should be:  
1 2 3 4 5  
*/  


#include <iostream>
using namespace std;
int main(){
    int i = 1;
    while (i <= 5)
    {
        cout << i << " ";
        i++;
        //cout << "\n";
    }
    cout << "\n";
    return 0;
}