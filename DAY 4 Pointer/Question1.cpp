// Write a program to calculate sum of two numbers using pointers

#include <iostream>
using namespace std;

int main()
{
    // int a = 10, b = 20;

    // int *p1 = &a, *p2 = &b;

    // cout << "Sum of two numbers is : " << *p1 + *p2;


    int a , b;
    int *p1 = &a, *p2 = &b;
    cout << "Enter the first number" << endl;
    cin >> *p1;
    cout << "Enter the second number" << endl;
    cin >> *p2;
    // cout << "Sum of two numbers is : " << *p1 + *p2;
    cout << "Sum of two numbers is : " << a + b;

    return 0;
}