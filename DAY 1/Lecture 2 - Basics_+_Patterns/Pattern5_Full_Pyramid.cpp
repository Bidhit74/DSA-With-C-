// FuLl Pyramid 
//        *
//       * *
//      * * *  
//     * * * * 
//    * * * * *
//   * * * * * * 
/*
#include <iostream>
using namespace std;

int main()
{
    int n = 6;

    for(int row = 0; row < n; row++){
        for(int space = 0; space < n-row; space++){
            cout << " ";
        }
        for(int col = 0; col < row+1; col++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
*/
// Inverted FuLl Pyramid 
//   * * * * * * 
//    * * * * *
//     * * * * 
//      * * *  
//       * *
//        *

#include <iostream>
using namespace std;

int main()
{
    int n = 6;

    for(int row = 0; row < n; row++){
        for(int space = 0; space < row+1; space++){
            cout << " ";
        }
        for(int col = 0; col < n-row; col++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}