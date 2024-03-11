// Question : Give two strings s and t , return true if t is an anagram of s, and otherwise false.

// example:
// input : s = bidhitkumar , t = kumarbidhit
// output : True
// input : s = bidhitkumar , t = rajkumarbidhit
// output : false

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "bidhitkumar", t = "kumarbidhit";
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s==t) cout <<"True" << endl;
    else cout <<"False" << endl;

    return 0;
}