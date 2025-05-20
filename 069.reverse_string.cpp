// Leet code [344. Reverse String] {Easy}
/*
Write a C++ program to reverse a given vector of characters in-place.

Problem Statement:
You are given a vector of characters.  
Reverse the elements of the vector without using any extra space and without using built-in reverse functions.

Example:
Input:
    s = {'f', 'd', 's', 'r', 'y', 'i'}
Output:
    i y r s d f
*/

#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int st = 0, end = s.size() - 1;
    while(st < end){
        swap(s[st++], s[end--]);
    }
}

int main () {
    vector<char> s = {'f', 'd', 's', 'r', 'y', 'i'};
    reverseString(s);
    for(char ch : s){
        cout << ch << " ";
    }
    cout << "\n";
    
return 0;
}