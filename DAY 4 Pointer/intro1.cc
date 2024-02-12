#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p = &x;

    cout << &x << endl; // Address storing
    cout << p << endl; // Address storing 
    cout << *p << endl; // dereference_operator (value printing)

    cout << x << endl;
    *p = 120; // update value by using pointer variable
    cout << x << endl;

    return 0;
}