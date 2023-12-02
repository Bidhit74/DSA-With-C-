// Write a function to display area of circle using function
// Area of circle = πr2

#include <iostream>
using namespace std;

float areaOfCircle(int radius){
    float pi = 3.14;
    float area = pi * radius * radius;
    return area;
}



int main()
{
    int radius;
    cout << "Enter the value radius of the circle :";
    cin >> radius;

    cout<<"Area of circle = "<<areaOfCircle(radius)<<endl;
    return 0;
}