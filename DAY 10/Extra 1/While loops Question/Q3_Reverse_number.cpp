// Ques - WAP to print reverse of a given number
// int n = 1971   output = 1791
// int n = 197158   output = 851791

#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    int s = n;
    while(n>0){
        int lastDigit = n%10;
        cout << lastDigit;
        n /= 10;
    }
    if(s == 0)
        cout << n;
    return 0;
}