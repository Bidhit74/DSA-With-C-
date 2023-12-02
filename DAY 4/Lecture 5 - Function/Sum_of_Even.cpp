// Sum of even number.Upto N

#include <iostream>
using namespace std;

// Havey code more processing
// int sumOfEvenNumber(int n){
//     int sum = 0;
//     for(int i = 1; i <= n; i++){
//         if(i%2 == 0){
//             sum += i;
//         }
//     }
//     return sum;
// }

// light code more efficient

int sumOfEvenNumber(int n){
    int sum = 0;
    for(int i = 2; i <= n; i=i+2){
            sum += i;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the number of sum of even numbers: ";
    cin >> n;
    cout << "Sum of even number : " << sumOfEvenNumber(n) << endl;

    return 0;
}