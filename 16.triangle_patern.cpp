/*  
Write a C++ program to print a right-angled triangle pattern of numbers,  
where each row contains the row number repeated.  

For example, if N = 4, the output should be:  
1  
2 2  
3 3 3  
4 4 4 4  
*/  

#include <iostream>
using namespace std; 

int main(){
    int n, i, j;
    cout << "Enter the value of n : ";
    cin >> n;

    for(i = 0; i < n; i++){
        for(j = 0; j < i+1; j++){
            cout << (i+1) << " ";
        }
        cout << "\n";
    }
    return 0;
}