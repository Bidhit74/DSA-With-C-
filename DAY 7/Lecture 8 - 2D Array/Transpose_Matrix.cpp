// Transpose Matrix from 2D Array
// problem
// 1 2 3
// 4 5 6
// 7 8 9
// Transpose Matrix
// 1 4 7
// 2 5 8
// 3 6 9

#include <iostream>
using namespace std;

void printTransposeMatrix(int arr[][3],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}


int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3, cols = 3;

    cout << "Original Matrix\n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose Matrix\n";
    printTransposeMatrix(arr,rows,cols);
    return 0;
}