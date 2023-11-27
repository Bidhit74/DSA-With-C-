// Fancy Pattern 3
// *
// * 1 *
// * 1 2 3 *
// * 1 2 3 2 1 *
// * 1 2 1 *
// * 1 *
// *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int r=0; r<n; r++){
        for(int c=0; c<=r; c++){
            if(c == 0){
                cout << "* ";
            }else{
                cout << c << " ";
            }
        }
        if(r == 1){
            cout << "* ";
            }
        if( r > 1 ){
            for(int c=r; c>0; c--)
            {
                if(c==1){
                    cout << "* ";
                }else{
                    cout << c-1 << " ";
                }
            }
        }
        
        cout << endl;
    }

    for(int r=0; r<n-1; r++){
        for(int c=0; c<n-1-r; c++){
            if(c == 0){
                cout << "* ";
            }else{
                cout << c << " ";
            }
        }
        for(int c=n-2-r; c>0; c--)
            {
                if(c==1){
                    cout << "* ";
                }else{
                    cout << c-1 << " ";
                }
            }
        cout << endl;
    }

    return 0;
}