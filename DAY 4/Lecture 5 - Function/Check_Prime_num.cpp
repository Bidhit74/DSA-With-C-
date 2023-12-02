// Check Number is prime or not
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

int main()
{
    int n;
    cout << "Enter the number and che the number of Prime or NotPrime: ";
    cin >> n;
    
    if(checkPrime(n)){
        cout << "Prime number:  " << n << endl;
    }
    else{
        cout << "Not a prime number:  " << n << endl;
    }

    return 0;
}