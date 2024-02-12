// Write a function to find out the first and last digit of a number without 
// returning anything.

#include <iostream>
using namespace std;

void firstAndLastDigit(int n,int *first, int *last){
    *first = n % 10;
    cout << "First digit of a number = " << *first << endl;
    while(n>9){
        *last = n/=10;
    }
    cout << "Last digit of a number = " << *last << endl;

    return;
}

int main()
{
    int n = 451238590;
    int firstDigit, lastDigit;
    int *ptr1 = &firstDigit, *ptr2 = &lastDigit;
    firstAndLastDigit(n, ptr1, ptr2);
    return 0;
}