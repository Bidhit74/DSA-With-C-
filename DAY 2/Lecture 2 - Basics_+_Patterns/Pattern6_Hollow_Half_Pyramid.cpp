// Hollow Inverted Half Pyramid
// n=6
// * * * * * *
// *       *
// *     *
// *   *
// * *
// * 

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n =10;
//     for(int row = 0; row < n; row++){
//         if(row == 0){
//             for(int col = 0; col < n; col++){
//                 cout << "* ";
//             }
//         }
//         else if(row == n-1){
//             cout << "* ";
//         }
//         else{
//             cout << "* ";
//             for(int spece = 0; spece < (n-2)-row; spece++){
//                 cout << "  ";
//             }
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Or

#include <iostream>
using namespace std;

int main()
{
    int n =6;
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            if(row == 0 || col== 0|| col == n-row-1){
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