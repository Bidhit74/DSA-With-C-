// Find the number of Even or Odd

#include <iostream>
using namespace std;

void EvenOrOdd(int num){
    if(num%2==0){
        cout << "Even: " << num << endl;
    }
    else{
        cout << "Odd: " << num << endl;
    }
}


int main()
{
    int n;
    cin >> n;
    EvenOrOdd(n);
    return 0;
}