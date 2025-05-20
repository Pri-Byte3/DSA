// Leet code [1910. Remove All Occurrences of a Substring] {Medium}
/*
Write a C++ program to remove all occurrences of a given substring from a given string.

Problem Statement:
You are given two strings:  
1. `s` — the main string.  
2. `part` — the substring you need to remove from `s`.  
Keep removing occurrences of `part` from `s` until no more occurrences are found.

Example:
Input:
    s = "daabcbaabcbc"
    part = "abc"
Output:
    "dab"

Input:
    s = "axxxxyyyyb"
    part = "xy"
Output:
    "axxxxb"
*/

#include <iostream>
using namespace std;

string removeOccurrences(string s, string part) {
    while(s.find(part) < s.size() && s.size() > 0){
        s.erase(s.find(part), part.size());
    }
    return s;
}

int main () {
    string str = "daabcbaabcbc", part = "abc";
    cout << removeOccurrences(str, part) << "\n";
return 0;
}