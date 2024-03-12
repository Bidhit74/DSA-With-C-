// stoi vs stoll buily - in funtion
// stoi -- convert string to integer
// stoll -- convert string to long long

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "1234567123123456789";
    cout << str << endl;
    // cout << str+1 << endl; // error
    // int x = stoi(str); // only 10 digit strore
    // cout << x << endl;
    // cout << x+1 << endl;
    long long x1 = stoll(str); // only 19 digit strore
    cout << x1 << endl;
    cout << x1+1 << endl;

    return 0;
}