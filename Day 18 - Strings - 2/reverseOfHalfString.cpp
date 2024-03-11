// Question : Input a string of even length and reverse the first half of the string.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "ABCDEFGH";
    int n = str.length();
    cout << str << endl;
    reverse(str.begin() + 0, str.begin() + n / 2);
    cout << str << endl;

    return 0;
}