// Reverse Number == 1 2 3 4 5 == 5 4 3 2 1  

#include <iostream>
using namespace std;

// int reverse(int x) {
//     int ans = 0;
//     while (x != 0)
//     {
//         int digit = x % 10;
//         if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
//         {
//             return 0;
//         }
//         ans = (ans * 10) + digit;
//         x = x / 10;
//     }
//     return ans;
// }

// OR
int reverse(int x) {
    int ans = 0;
    bool isNegative = false;

    if(x<0) {
        isNegative = true;
        x = -x;
    }
    while (x != 0)
    {
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
        {
            return 0;
        }
        int digit = x % 10;
        ans = (ans * 10) + digit;
        x = x / 10;
    }
    return isNegative ? -ans : ans;
}


int main()
{
    int n = -2345;
    cout << reverse(n);

    return 0;
}