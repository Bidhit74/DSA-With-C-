// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int x = 123456;
//     cout << x << endl;
//     // string s = (string)x; // error not type cast
//     string s = to_string(x);
//     cout << s << endl;

//     return 0;
// }


// Question : Return the total number of digits in a number without using any loops.
//Hint : Try using inbuilt to_string() function.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int x = 123456;

    cout << "Total number of digits: " << to_string(x).length() << endl;
    return 0;
}