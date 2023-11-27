// Numeric Palindrome Equilateral Pyramid
//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int row = 0; row < n; row++){
        for(int space = 0; space < n-row-1; space++){
            cout << "  ";
        }
        for (int col = 1; col <= row + 1;col++){
            cout << col<< " ";
        }
        for (int col = row; col >= 1;col--){
            cout << col<< " ";
        }
        cout << endl;
    }

    return 0;
}