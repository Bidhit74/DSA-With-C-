// Solid Diamond Shape
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

// full pyramid
    for(int row = 0; row < n; ++row){
        for(int space = 1; space < n-row; space++){
            cout << " ";
        }
        for(int col = 0; col < row+1; col++){
            cout<< "* ";
        }
        cout << endl;
    }

// Invertrd full pyramid

    for(int row = 0; row < n; ++row){

        for(int space = 1; space < row+1; space++){
            cout << " ";
        }
        for(int col = 0; col < n-row; col++){
            cout<< "* ";
        }
        cout << endl;
    }
    return 0;
}