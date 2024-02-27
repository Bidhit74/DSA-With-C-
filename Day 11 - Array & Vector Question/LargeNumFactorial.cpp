// Question -- Find the factorial of a large number.
// Hint -- Use an array to store every digit of answer.

#include <iostream>
#include <vector>
using namespace std;

int gofunc(vector<int> &fac , int value, int size){
    int carry = 0;
    for (int i = 0; i < size; i++){
        int product = fac[i]*value + carry;
        fac[i] = product%10;
        carry = product/10;
    }
    while(carry){
        fac[size] = carry % 10;
        carry /= 10;
        size++;
        
    }
    return size;

}

void largeNumFactorial(vector<int> &fac, int n){
    int size = 1;
    fac[0] = 1;
    for(int i = 2; i <= n; i++){
        size = gofunc(fac, i, size);
    }
    for(int i = size-1; i >= 0; i--){
        cout << fac[i];
    }
}

int main()
{
    int n;
    cout << "Enter the factorial of a number : ";
    cin >> n;

    vector<int> fact(500,0);
    largeNumFactorial(fact, n);
    return 0;
}