// Leet code [125. Valid Palindrome] {Easy}

/*
Write a C++ program to check if a given string is a valid palindrome, ignoring non-alphanumeric characters and 
case sensitivity.

Problem Statement:
You are given a string that may contain letters, digits, spaces, and symbols.  
Check whether the string reads the same forward and backward, considering only alphanumeric characters and ignoring
cases.

Example:
Input:
    str = "A man, a plan, a canal: Panama"
Output:
    true   (It's a palindrome)

Input:
    str = "race a car"
Output:
    false
*/

#include <iostream>
using namespace std;

bool isAlphanumeric(char ch){
        if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')) return true;
        else return false;
    }
    
bool isPalindrome(string str) {
        int st = 0, end = str.size() - 1;
        while(st < end){
            if(!isAlphanumeric(str[st])){
                st++; 
                continue;
            } 
            if(!isAlphanumeric(str[end])){
                end--; 
                continue;
            }
            if(tolower(str[st++]) != tolower(str[end--])) return false;
        }
        return true;
    }
    


int main () {
    string str = "racecar";
    cout << isPalindrome(str) << "\n";
return 0;
}