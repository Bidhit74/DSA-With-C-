// Alphabet Palindrome Pyramid
// A
// A B A
// A B C B A
// A B C D C B A
// A B C D E D C B A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int row = 0; row < n; row++){
        for(int col = 1; col <= row+1; col++){
            char ch = 'A' + col-1;
            cout << ch<<" ";
        }
        for(int col = row; col >= 1; col--){
            char ch = 'A' + col-1;
            cout << ch<<" ";
        }
        cout<<endl;
    }

    return 0;
}