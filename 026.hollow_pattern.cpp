/*
Write a C++ program to print a pattern of a hollow diamond shape with stars.

For example, if N = 5, the output should be:

    *   
   * *  
  *   * 
 *     *
*       *
 *     *
  *   *
   * *
    *
*/

#include <iostream>
using namespace std; 

int main(){
    int n, i, j;
    cout << "Enter the value of n : ";
    cin >> n;

    //top
    for(i = 0; i < n; i++){
        for(j = 0; j < n-i-1; j++){
            cout << " ";
        }
        cout << "*";
        if(i!=0){
            for(j = 0; j < i*2-1; j++){
            cout << " ";
            }
        cout << "*";    
        }
        cout << "\n";
    }


    //bottom
    for(i = 0; i < n-1; i++){
        for(j = 0; j < i+1; j++){
            cout << " ";
        }
        cout << "*";
        if(i != n-2){
            for(j = 0; j < 2*(n-i)-5; j++){
            cout << " ";
            }
        cout << "*";    
        }
        cout << "\n";
    }
    return 0;
}