#include<iostream>
using namespace std;
int main(){
    bool a = false;
    bool b = true;
    cout<<(a&b)<<endl; // BITWISE AND
    cout<<(a^b)<<endl; // BITWISE XOR
    cout<<(a|b)<<endl; // BITWISE OR
    cout<<(~a)<<endl; // BITWISE NOT
    cout<<(7&5)<<endl; // BITWISE AND on 2 numbers
    cout<<(5|7)<<endl; // BITWISE OR on 2 numbers
    int c = 10;
    int value = c << 1; // Left shift Operator
    int value2 = c >> 1; // Right shift Operator
    cout<<value<<endl;
    cout<<value2<<endl;
    int k = 4;
    // cout << k  << endl;
    // int v = (++k) * (++k);
    int n = (--k) * (--k);
    // cout << k << endl;
    // cout << v << endl;
    cout << n << endl;
    return 0;
}