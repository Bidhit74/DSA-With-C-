// Pascal's Triangle Pattern

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
// 1 6 15 20 15 6 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int r = 1; r <= n;r++){
        int count = 1;
        for(int c = 1; c <= r; c++){
            cout << count << " ";
            count = count * (r - c) / c;
        }
        cout << endl;
    }

    return 0;
}