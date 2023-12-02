// Print all prime number from 1 to N

#include <iostream>
using namespace std;

bool checkPrime(int n){
    if(n==0 || n==1){
        return false;
        }
    for(int i = 2 ; i <= n/2 ; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void printPrime(int n){
    for (int i = 2; i <= n; i++){
        if(checkPrime(i)){
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    printPrime(n);
    return 0;
}