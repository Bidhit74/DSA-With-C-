// Find the value minimum number from 2D Array
// problem
// 1 2 3
// 4 5 6
// 7 8 9
// output = 1

#include <iostream>
using namespace std;

int findMinimum(int arr[][3],int rows,int cols){
    int min = INT_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(min>arr[i][j]){
                min = arr[i][j];
            }
        }
    }
    return min;
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 15, -6}, {7, 0, 9}};
    int row = 3, col = 3;

    cout << "Maximum number from array : " << findMinimum(arr, row, col) << endl;
    return 0;
}