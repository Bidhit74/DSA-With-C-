#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "ABCDEFGH";
    cout << str << endl;
    // str.substr(index,length);
    cout << str.substr(0) << endl;
    cout << str.substr(1) << endl;
    cout << str.substr(1,4) << endl;


    return 0;
}