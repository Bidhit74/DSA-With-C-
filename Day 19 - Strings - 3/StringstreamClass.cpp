#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string str = "Bidhit is    a math teacher";
    stringstream ss(str);
    string temp;
    cout << str << endl;
    while(ss>>temp){
        cout << temp << endl;
    }
    return 0;
}