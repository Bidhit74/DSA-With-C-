// Ques - WAP to print sum of digits of a given number
// int n = 1971   output = 18
// int n = 197158   output = 31

#include <iostream>
using namespace std;

int main()
{
    int sum = 0 , n = 197158;
    while (n > 0){
        int digit = n % 10;
        sum += digit;
        n/= 10;
    }
    cout << "\n Sum of Digit : " <<sum;
    return 0;
}