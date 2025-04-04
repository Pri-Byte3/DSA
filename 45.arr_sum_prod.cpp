/*
Write a C++ program to calculate the sum and product of all elements in an array.
Example:
Input: arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}
Output: Sum = 45, Product = 362880
The function should iterate through the array to compute the sum and product.
*/

#include <iostream>
using namespace std;


int sum_of_arr(int arr[], int sz){
    int sum = 0;
    for(int i = 0; i < sz; i++){
        sum += arr[i];
    }
    return sum;
}

int prod_of_arr(int arr[], int sz){
    int prod = 1;
    for(int i = 0; i < sz; i++){
        prod *= arr[i];
    }
    return prod;
}



int main () {
    int sz = 9;    
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Sum : " << sum_of_arr(arr, sz) << "\n";
    cout << "Product : " << prod_of_arr(arr, sz) << "\n";
return 0;
}