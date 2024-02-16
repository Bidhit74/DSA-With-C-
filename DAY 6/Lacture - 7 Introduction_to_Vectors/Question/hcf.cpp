// Question - Write a function to compute the greatest common divisor of two given numbers.

#include <iostream>
using namespace std;

int HCF(int a, int b){
    int result = 1;

    for (int i = min(a, b); i >= 1;i--){
        if(a%i == 0 && b%i == 0){
            result = i;
            break;
        }
    }
    return result;
}

int main()
{
    int a, b;
    cout << "Enter the 1st and 2nd number" << endl;
    cin >> a >> b;

    cout << "First number: " << a <<" Second number: "<< b << " of HCF = "<<
    HCF(a,b)<< endl;

    return 0;
}