// Leet code [151. Reverse Words in a String] {Medium}

/*
Write a C++ program to reverse the order of words in a given string.

Problem Statement:  
You are given a string `s` containing multiple words separated by spaces.  
Reverse the order of the words without reversing the characters in each word.

Example:  
Input:  
    s = "the sky is blue"  
Output:  
    "blue is sky the"

Input:  
    s = "  hello world  "  
Output:  
    "world hello"

Note:  
- Ignore leading or trailing spaces and ensure only a single space between words in the output.
*/

#include <iostream>
using namespace std;

string reverseWords(string s) {
    int n = s.size();
    reverse(s.begin(), s.end());
    string ans = "";

    for(int i = 0; i < n; i++){
        string word = "";
        while(i < n && s[i] != ' '){
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if(word.size() > 0){
            ans += " " + word;
        }
    }
    return ans.substr(1);
}



int main () {
    string str = "the sky is blue";
    cout << reverseWords(str) << "\n";

return 0;
}
