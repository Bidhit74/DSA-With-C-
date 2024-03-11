#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "Bidhit";
    cout << str << endl;
    sort(str.begin(), str.end()); // Ascii value ke order me sort karta hai
    cout << str << endl;

    return 0;
}