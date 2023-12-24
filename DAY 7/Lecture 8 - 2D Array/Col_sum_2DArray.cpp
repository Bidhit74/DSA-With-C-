// Colum wise of sum from 2D Array
// problem
// 1 2 3
// 4 5 6
// 7 8 9
// output = 12 15 18

#include <iostream>
using namespace std;

void printColSum( int arr[][3],int row, int col){
    for(int i=0; i<row; i++){
            int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3, col = 3;
    cout << "Output = ";
    printColSum(arr, row, col);
    return 0;
}