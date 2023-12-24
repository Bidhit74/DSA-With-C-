// Find the value maximum number from 2D Array
// problem
// 1 2 3
// 4 5 6
// 7 8 9
// output = 9

#include <iostream>
using namespace std;

int findMaximum(int arr[][3],int rows,int cols){
    int max = INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 15, 6}, {7, 8, 9}};
    int row = 3, col = 3;

    cout << "Maximum number from array : " << findMaximum(arr, row, col) << endl;
    return 0;
}