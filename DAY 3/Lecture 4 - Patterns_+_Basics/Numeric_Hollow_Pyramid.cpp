// Numeric Hollow Pyramid
//     1
//    1 2
//   1   3
//  1     4   
// 1 2 3 4 5

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int r = 0; r < n; r++){
        for (int s = 0; s < n-1-r; s++){
            cout << " ";
        }
        for (int c = 1; c <= 1; c++){
            cout << c;
        }
        if(r>=1 && r<n-1){
            for (int s = 0; s < 2*r-1; s++){
                cout << " ";
            }
            for (int c = 1; c <= 1; c++){
                cout << r+1;
            }
        }
        if( r == n-1){
            for (int c = 1; c <= r; c++){
                cout << " " << c+1;
            }
        }
        cout << endl;
    }

    return 0;
}