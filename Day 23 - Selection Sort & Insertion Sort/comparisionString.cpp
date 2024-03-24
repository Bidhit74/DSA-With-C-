#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "bidhit";
    string str2 = "bidhit";

    cout<<str1.compare(str2)<<endl;

    //if str1 == str2 : 0
    //if str1 > str2 : +ve
    //if str1 < str2 : -ve
    return 0;
}