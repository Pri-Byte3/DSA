// Leet code [567. Permutation in String] {Medium}

/*
Write a C++ program to check whether one string is a permutation of a substring of another string.

Problem Statement:  
You are given two strings, `s1` and `s2`.  
Determine if `s2` contains a substring that is a permutation of `s1`.  
In other words, check if any permutation of `s1` is present as a continuous substring in `s2`.

Example:  
Input:  
    s1 = "ab"  
    s2 = "eidbaooo"  
Output:  
    true   // because "ba" (a permutation of "ab") is present in "eidbaooo".

Input:  
    s1 = "ab"  
    s2 = "eidboaoo"  
Output:  
    false
*/

#include <iostream>
#include <string>
using namespace std;

bool issame(int freq1[], int freq2[]){
    for(int i = 0; i < 26; i++){
        if(freq1[i] != freq2[i]) return false;
    }
    return true;
}


bool checkInclusion(string s1, string s2) {
    int freq[26] = {0};

    for(int i = 0; i < s1.size(); i++){
        freq[s1[i] - 'a']++;
    }

    for(int i = 0; i < s2.size(); i++){
        int window_freq[26] = {0};
        int window_idx = 0, idx = i;

        while(window_idx < s1.size() && idx < s2.size()){
            window_freq[s2[idx] - 'a']++;
            window_idx++; idx++;
        }
        if(issame(freq, window_freq)) return true;
    }
    return false;
}

int main () {
    string s1 = "ab", s2 = "eidbaooo";
    cout << checkInclusion(s1, s2) << "\n";

return 0;
}

