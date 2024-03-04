// Question : Write a program to print the matrix in spiral form . leetcode No. 54

// Given an m x n matrix, return all elements of the matrix in spiral order.
// Example:
// 1 2 3
// 4 5 6
// 7 8 9
// Output -- 1 2 3 6 9 8 7 4 5
// Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
// Output: [1,2,3,4,8,12,11,10,9,5,6,7]

#include <iostream>
#include <vector>
using namespace std;

void printSpiralForm(vector<vector<int>> &matrix, int rows, int cols){
    int minRow = 0;
    int maxRow = rows-1;
    int minCol = 0;
    int maxCol = cols-1;
    int tne = rows * cols;
    int count = 0;
    while(minRow <= maxRow && minCol <= maxCol){
        // Right column treversed
        // if(minRow > maxRow || minCol > maxCol) break;
        for (int j = minCol; j <= maxCol && count < tne; j++){
            cout << matrix[minRow][j] << " ";
            count++;
        }
        minRow++;
        
        //Down row treversed
        // if(minRow > maxRow || minCol > maxCol) break;
        for (int i = minRow; i <= maxRow && count < tne;i++){
            cout<<matrix[i][maxCol] << " ";
            count++;
        }
        maxCol--;

        //Left column treversed
        // if(minRow > maxRow || minCol > maxCol) break;
        for (int j = maxCol; j >= minCol && count < tne; j--){
            cout<<matrix[maxRow][j] << " ";
            count++;
        }
        maxRow--;

        // Up row treversed
        // if(minRow > maxRow || minCol > maxCol) break;
        for (int i = maxRow; i>=minRow && count < tne; i--){
            cout<<matrix[i][minCol] << " ";
            count++;
        }
        minCol++;
    }
}

int main()
{
    int rows, cols;   
    cout << "Enter the first matrix rows and cols num : ";
    cin >> rows >> cols;
    // Create and input the first matrix
    cout << "Enter the matrix data : ";
    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    printSpiralForm(matrix, rows, cols);
    return 0;
}