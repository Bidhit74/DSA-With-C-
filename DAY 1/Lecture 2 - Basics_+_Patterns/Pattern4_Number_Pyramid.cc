// Numeric Half Pyramid 
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

/*
#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    for (int row = 1; row < n; row++) {
        for(int col = 1; col < (n-n+1)+row; col++) {
            cout << col<<" ";
        }
        cout << endl;
    }

        return 0;
}
*/

// Numeric Inverted Half Pyramid 
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    for (int row = 1; row < n; row++) {
        for(int col = 1; col < n-row+1; col++) {
            cout << col<<" ";
        }
        cout << endl;
    }

        return 0;
}