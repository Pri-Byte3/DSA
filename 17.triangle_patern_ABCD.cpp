/*  
   Write a C++ program to print a right-angled triangle pattern of alphabets.  
   Each row should contain the same letter, starting from 'A' in the first row,  
   'B' in the second row, and so on.  

   Example:  
   If N = 4, the output should be:  
   
   A  
   B B  
   C C C  
   D D D D  
*/

#include <iostream>
using namespace std; 

int main(){
    int n, i, j;
    char ch;
    cout << "Enter the value of n : ";
    cin >> n;
    
    ch = 'A';
    for(i = 0; i < n; i++){
        for(j = 0; j < i+1; j++){
            cout << (ch) << " ";
        }
        cout << "\n";
        ch++ ;
    }
    return 0;
}
