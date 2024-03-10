#include <iostream>
#include<string>
using namespace std;

int main()
{
    // string str = "Bidhit Kumar"; // String as work array
    // cout << str << endl;
    // cout << str[0] << endl;

    // Input String
    string s;
    // cin >> s; // cin input leta without specing
    getline(cin, s); // Ab yah with speces printing hoga
    cout << s << endl;

    return 0;
}