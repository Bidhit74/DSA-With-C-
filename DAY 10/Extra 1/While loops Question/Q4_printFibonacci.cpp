// Question - Print the nth fibonacci number.
// n = 6;
// output = series = 1 1 2 3 5 8

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Number of fibonacci :";
    cin >> n;
    int first = 0 , second = 1 , sum = 0;

    for(int i = 1; i <= n; i++){
        cout << first << " ";
        sum = first + second;
        first = second;
        second = sum;
    }

    return 0;
}