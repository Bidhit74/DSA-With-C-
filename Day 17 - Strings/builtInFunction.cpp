#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // string str = "Bidhit";
    // cout << str.length() << endl; // Length of the string
    // cout << str.size() << endl; // Length of the string

    // string str = "Bidhit";
    // cout << str<< endl;
    // str.push_back('K'); // Last me add hota hai characters
    // cout << str<< endl;
    // str.pop_back(); // Last me remove hota hai characters
    // cout << str<< endl;

    // Plus Operator(+) // concat karta string ko
    // string str = "Bidhit";
    // string str1 = str + " Kumar";
    // cout << str1<< endl;

    //Rerverse Function
    string str = "Bidhit";
    cout << str << endl;
    reverse(str.begin(), str.end());
    cout << str<< endl;
    reverse(str.begin()+2, str.end());
    cout << str<< endl;

    return 0;
}