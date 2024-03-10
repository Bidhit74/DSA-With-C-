#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Bidhit";
    cout << str << endl;
    str[3] = 'i'; // In C++, string are mutable/chengable
    cout << str << endl;
    return 0;
}