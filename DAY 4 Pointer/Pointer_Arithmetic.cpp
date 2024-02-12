#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p = &x;

    cout << p << endl; // 0x26617ffb14
    p = p + 1;
    cout << p << endl; // 0x26617ffb18

    cout << p << endl; // 0x26617ffb14
    p = p - 1;
    cout << p << endl; // 0x26617ffb14
    p = p + 1;
    cout << *p << endl; // 1965029256 garbage value

    return 0;
}