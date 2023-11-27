// Fancy Pattern 3
// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num = 1;
    for(int r = 0; r < n;r++) {
        for(int c = 0; c < r+1; c++){
            cout << num;
            if(c != r){
                cout << "*";
            }
            num++;
        }
        cout << endl;
    }

    num=num-n;

    for(int r=n;r>=1;r--){ 
        for(int c=1;c<=r;c++){
            if(c<r){
                cout << num++ << "*";
            }
            else{
                cout << num++;
            }

        }
    num=(num+1)-2*r;

    cout << endl;

    }
    return 0;
}

