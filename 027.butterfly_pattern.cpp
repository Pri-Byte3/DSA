/*
Write a C++ program to print a pattern of two inverted triangles with spaces between them. 

For example, if N = 5, the output should be:

*       *
**     **
***   ***
**** ****
*********
*********
**** ****
***   ***
**     **
*       *
*/

#include <iostream>
using namespace std; 

int main(){
    int n, i, j;
    cout << "Enter the value of n : ";
    cin >> n;

    //top
    for(i = 0; i < n; i++){

        //1st triangle part
        for(j = 0; j < i+1; j++){
            cout << "*";
        }

        //1st space
        for(j = 0; j < (n-i-1); j++){
        cout << " ";
        } 

        //2nd space
        for(j = 0; j < (n-i-1); j++){
        cout << " ";
        }    

        //2nd triangle part
        for(j = 0; j < i+1; j++){
            cout << "*";
        }

        cout << "\n";
    }


    //bottom
    for(i = 0; i < n; i++){

        //1st triangle part
        for(j = 0; j < (n-i); j++){
            cout << "*";
        }
        
        //1st space
        for(j = 0; j < i; j++){
        cout << " ";
        } 

        //2nd space
        for(j = 0; j < i; j++){
        cout << " ";
        }
        
        //2nd triangle part
        for(j = 0; j < (n-i); j++){
            cout << "*";
        }
            
        cout << "\n";
    }
    return 0;
}