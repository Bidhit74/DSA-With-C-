// Flipped Solid Diamonds
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the even number\n";
    cin >> n;
    //first part
    for(int row = 0; row < n/2; row++){
        for(int col = n/2-row; col > 0; col--){
            cout<<"*";
        }
        for(int space = 0; space < row*2; space++){
            cout<<" ";
        }
        for(int col = n/2-row; col > 0; col--){
            cout<<"*";
        }
        cout << endl;
    }
    //second part
    for(int row = 0; row < n/2; row++){
        for(int col = 0; col < row+1; col++){
            cout<<"*";
        }
        for(int space = 0; space < n-(2*row)-2 ; space++){
            cout<<" ";
        }
        for(int col = 0; col < row+1; col++){
            cout<<"*";
        }
        cout << endl;
    }

    return 0;
}