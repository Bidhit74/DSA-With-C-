// Fancy Pattern
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int row = 1; row <= n; row++){
        for(int col = 0; col < row; col++){
            cout << row;
            if(col != row-1){
                cout << "*";
            }
        }
        cout << endl;
    }

    for(int row = n; row >0 ; row--){
        for(int col = 0; col < row; col++){
            cout << row;
            if(col != row-1){
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}