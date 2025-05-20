/*  
   Write a C++ program to print a right-angled triangle of numbers.  
   Each row should start from 1 and increase sequentially.  

   Example:  
   If N = 4, the output should be:  
   
   1  
   1 2  
   1 2 3  
   1 2 3 4  
*/

#include <iostream>
using namespace std; 

int main(){
    int n, i, j, num;
    cout << "Enter the value of n : ";
    cin >> n;

    for(i = 0; i < n; i++){
        num = 1;
        for(j = 0; j < i+1; j++){
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }
    return 0;
}

// Modified
// #include <iostream>
// using namespace std; 

// int main(){
//     int n, i, j;
//     cout << "Enter the value of n : ";
//     cin >> n;

//     for(i = 0; i < n; i++){
//         for(j = 1; j <= i+1; j++){
//             cout << j << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }