// Ques - WAP to count digits of a given number
// int n = 1971   output = 4
// int n = 197158   output = 6

#include <iostream>
using namespace std;

int main()
{
    int n = 1852;
    int count = 0;
    int a = n;
    while (n > 0){
        count++;
        n /= 10;
    }
    if(a==0) cout << "\n Digit count: 1";
    else
    cout << "\n Digit count: " << count;
    return 0;
}
