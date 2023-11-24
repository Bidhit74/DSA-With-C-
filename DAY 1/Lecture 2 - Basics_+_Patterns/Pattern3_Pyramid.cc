// My problem is half pyramid or Trangle
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *

/*
#include <iostream>
using namespace std;

int main()
{
    for (int row = 0; row < 6; row++){
        for (int col = 0; col < row + 1; col++){
            cout << "* ";
        }
        cout << endl;
    }
        return 0;
}
*/

// My problem is inverted half pyramid or Trangle
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    for (int row = 0; row < n; row++){
        for (int col = 0 ; col < n-row; col++){
            cout << "* ";
        }
        cout << endl;
    }
        return 0;
}