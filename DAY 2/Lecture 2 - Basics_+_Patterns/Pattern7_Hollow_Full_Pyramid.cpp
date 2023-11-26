// Full Pyramid
// ROW = 6 AND COL = 11
//           *
//         * * *
//       * * * * *
//     * * * * * * *
//   * * * * * * * * *
// * * * * * * * * * * *

/*
#include <iostream>
using namespace std;

int main()
{
    int n = 6;

    for(int row = 0; row < n; row++){
        for(int space = 0; space < n+1-row; space++){
            cout << "  ";
        }
        for(int col = 0; col < (row*2)+1; col++){
            cout << "* ";
        }
        cout<< endl;
    }

    return 0;
}
*/
// Hollow Full Pyramid
// ROW = 6 AND COL = 11
//           *
//         *   *
//       *       *
//     *           *
//   *               *
// * * * * * * * * * * *

#include <iostream>
using namespace std;

int main()
{
    int n = 6;

    for(int row = 0; row < n; row++){
        int col = 0;
        for(int space = 0; space < (2*n)-1; space++){
            if(space<n-row-1){
                cout << "  ";
            }
            else{
                if(col==0||col==2*row||row == n-1){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
                col++;
            }
        }
        cout<<endl;
    }

    return 0;
}