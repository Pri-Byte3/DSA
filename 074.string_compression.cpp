// Leet code [443. String Compression] {Medium}
/*
Write a C++ program to perform basic string compression.

Problem Statement:
You are given an array of characters `chars` of length `n`.  
Your task is to modify the array in-place by compressing consecutive repeating characters.  
The compression format should be:  
- Keep the character as is if it appears only once.  
- If a character repeats `count` times, append its frequency after the character.  
- The array should be compressed in-place, and the function should return the new length of the compressed array.

Example:  
Input:  
    chars = ['a', 'a', 'b', 'b', 'c', 'c', 'c']  
Output:  
    ['a', '2', 'b', '2', 'c', '3'] (New length: 6)

Input:  
    chars = ['a']  
Output:  
    ['a'] (New length: 1)

Input:  
    chars = ['a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b']  
Output:  
    ['a', 'b', '1', '1'] (New length: 4)

Note:  
- The compression should be performed in-place, modifying the input array directly.  
- The function should return the new length of the compressed array.  
- The order of characters should remain unchanged.
*/

#include <iostream>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size(), idx = 0;
    for(int i = 0; i < n;){
        int count = 0;
        char curr_char = chars[i];
        while(i < n && chars[i] == curr_char){
            count++;
            i++;
        }
        if(count == 1){
            chars[idx++] = curr_char;
        }
        else{
            chars[idx++] = curr_char;
            string str = to_string(count);
            for(char dig : str){
                chars[idx++] = dig;
            }
        }
    }
    chars.resize(idx);
    return idx;
}

int main () {
    vector<char> chars = {'a','a','b','b','c','c','c'};
    cout << compress(chars) << "\n";

return 0;
}