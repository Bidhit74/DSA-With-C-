// Question - Write a program to store roll number and marks obtained 
// by 4 students side by side in a matrix format.

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter the row number : ";
    cin >> n;
    cout<<"Enter the colunm number : ";
    cin >> m;
    int rollMarks[n][m];
    cout<<"Enter the roll number and Marks : ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> rollMarks[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << rollMarks[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}