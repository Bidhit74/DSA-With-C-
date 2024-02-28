// Question : Write a program to add two matrices.

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter the row number : ";
    cin >> n;
    cout<<"Enter the colunm number : ";
    cin >> m;
    int firstMarix[n][m];
    cout<<"Enter the first Marix : ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> firstMarix[i][j];
        }
    }
    int x, y;
    cout<<"Enter the row number : ";
    cin >> x;
    cout<<"Enter the colunm number : ";
    cin >> y;
    int secondMarix[x][y];
    cout<<"Enter the second Marix : ";
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cin >> secondMarix[i][j];
        }
    }

    if(x == n && y == m){
        cout<<"Result - Add two matrices" << endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                firstMarix[i][j] += secondMarix[i][j];
                cout << firstMarix[i][j] << " ";
            }
            cout << endl;
        }
    }
    else{
        cout<<"There are your two add not possible(row or column not equal) ";
    }
    return 0;
}