// `Floyd's Triangle Pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21
// 22 23 24 25 26 27 28

#include <iostream>
using namespace std;

int main()
{
    int num = 1, n;
    cin >> n;
    for (int r = 0; r < n; r++) {
        for(int c = 0; c < r+1; c++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}