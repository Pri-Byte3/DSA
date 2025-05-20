// LeetCode [131. Palindrome Partitioning] {Medium}
/*
Problem Statement:
Given a string `s`, partition `s` such that every substring of the partition is a palindrome.
Return all possible palindrome partitionings of `s`.

A palindrome is a string that reads the same backward as forward.

Each partition must consist of non-empty substrings, and each substring must be a palindrome.
You may return the answer in any order.

Example:
Input: s = "aab"

Output: 
[
  ["a","a","b"],
  ["aa","b"]
]

Time Complexity: O(2^n * n)
- There are 2^n possible ways to partition the string.
- Each palindrome check takes O(n) time.

Space Complexity: O(n) for recursion stack + O(n * 2^n) for storing the results
*/

#include<iostream>
using namespace std;

bool isPalindrome(string part){
    int st = 0, end = part.size()-1;
    while(st < end){
        if(part[st++] != part[end--]) return false;
    }
    return true;
}

void get_all_part(string s, vector<string> &partition, vector<vector<string>> &ans){
    if(s.size() == 0){
        ans.push_back(partition);
        return;
    }
    for(int i=0; i<s.size(); i++){
        string part = s.substr(0, i+1);

        if(isPalindrome(part)){
            partition.push_back(part);
            get_all_part(s.substr(i+1), partition, ans);
            partition.pop_back();
        }
    }
}

vector<vector<string>> partition(string s) {
    vector<string> partition;
    vector<vector<string>> ans;

    get_all_part(s, partition, ans);
    return ans;
}

int main(){
    string s = "aab";
    vector<vector<string>> res = partition(s);

    cout << "[";
    for (int i = 0; i < res.size(); ++i) {
        cout << "[";
        for (int j = 0; j < res[i].size(); ++j) {
            cout << "\"" << res[i][j] << "\"";
            if (j != res[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i != res.size() - 1) cout << ",";
    }
    cout << "]\n";

    return 0;
}