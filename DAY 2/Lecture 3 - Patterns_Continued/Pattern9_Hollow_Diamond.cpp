// Hollow Diamond shape
//      *
//    *   *
//   *     *
//  *       *
// *         *  
// *         *  
//  *       *
//   *     *
//    *   *
//      *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //half holoow diamond
    for(int row = 0; row < n; ++row){

        for(int space = 0; space < n-row-1; space++){
            cout << "  ";
        }

        for (int col = 0; col < 2*row+1; col++){
            if(col==0){
                cout << "* ";
            }
            else if(col==2*row){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
     //inverted half holoow diamond
    for(int row = 0; row < n; ++row){

        for(int space = 0; space < row; space++){
            cout << "  ";
        }

        for (int col = 0; col < 2*n-row-1; col++){
            if(col==0 || col == 2*n-(2*row)-2){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}