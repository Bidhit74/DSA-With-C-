// Fancy Pattern 2
// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int row = 0; row < n; ++row){
        for(int star = 0; star < 2*n-2-row; star++){
            cout << "*";
        }
        for (int col = 0; col < row+1;col++){
            cout << row+1 << "*";
        }
        for(int star = 0; star < 2*n-3-row; star++){
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}