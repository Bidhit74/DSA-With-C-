// Butterfly Pattern

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int r = 0; r < n; r++){
        for(int c = 0; c < r+1; c++){
            cout << "*";
        }
        for(int space = 1; space < n-r; space++){
            cout << " ";
        }
        for(int space = 1; space < n-r; space++){
            cout << " ";
        }
        for(int c = 0; c < r+1; c++){
            cout << "*";
        }
        cout << endl;
    }
    for(int r = 0; r < n; r++){
        for(int c = 0; c < n-r; c++){
            cout << "*";
        }
        for(int space = 1; space < r+1; space++){
            cout << " ";
        }
        for(int space = 1; space < r+1; space++){
            cout << " ";
        }
        for(int c = 0; c < n-r; c++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}