// Row wise of sum from 2D Array
// problem
// 1 2 3
// 4 5 6
// 7 8 9
// output = 6 15 24

#include <iostream>
using namespace std;

void printRowSum( int arr[][3],int row, int col){
    for(int i=0; i<row; i++){
            int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3, col = 3;
    cout << "Output = ";
    printRowSum(arr, row, col);
    return 0;
}