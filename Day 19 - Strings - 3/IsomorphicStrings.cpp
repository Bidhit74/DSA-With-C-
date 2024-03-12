// leetcode : 205. Isomorphic Strings
// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// Example 1:
// Input: s = "egg", t = "add"
// Output: true  // why isomorphic : e --> a , g --> d, g -->d

// Example 2:
// Input: s = "foo", t = "bar"
// Output: false

// Example 3:
// Input: s = "paper", t = "title"
// Output: true  // why isomorphic : p --> t , a --> i, p -->t, e --> l, r --> e;

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int>v(150,1000);
        // first time s ke point view se
        for(int i =0; i<s.size(); i++){
            int idx = (int)s[i];
            if(v[idx]==1000) v[idx] = s[i]-t[i];
            else if(v[idx]!= s[i]-t[i]) return false;
        }
        //again fill vector 1000
        for(int i=0; i<150; i++){
            v[i] = 1000;
        }
        // second time t ke point view se
        for(int i =0; i<t.size(); i++){
            int idx = (int)t[i];
            if(v[idx]==1000) v[idx] = t[i]-s[i];
            else if(v[idx]!= t[i]-s[i]) return false;
        }
        return true;
}

int main()
{
    string s = "egg", t = "add";
    if(isIsomorphic(s,t))
        cout << "This is Isomorphic";
    else cout << "This is not Isomorphic";
    return 0;
}