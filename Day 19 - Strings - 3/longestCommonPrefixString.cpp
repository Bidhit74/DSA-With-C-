// leetcode : 14. Longest Common Prefix
// Question : Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"

// Example 2:
// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string s = "";
        if(n==1) return strs[0];
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[n-1];
        for(int i =0; i<min(first.size(),last.size()); i++){
            if(first[i]==last[i]){
                s +=first[i];
            }
            else return s;
        }
        return s;
}


int main()
{
    vector<string> strs = {"flower","flow","flight"};

    cout <<longestCommonPrefix(strs) <<endl;
    return 0;
}