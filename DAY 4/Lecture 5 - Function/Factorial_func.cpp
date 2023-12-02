// Find factorial of a number

#include <iostream>
using namespace std;

long long int Factorial(long long n){
    long long fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter the factorial of a number : ";
    cin >> n;

    cout<<"Factorial of : "<< Factorial(n) <<endl;
    return 0;
}