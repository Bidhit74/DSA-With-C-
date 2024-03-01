// Question:  opposite Wave form Printing
// Example:
// 1 2 3
// 4 5 6
// 7 8 9

// Output -- 7 8 9 6 5 4 1 2 3


#include <iostream>
#include <vector>
using namespace std;

void oppositeWavePrinting(vector<vector<int>> &matrix, int rows, int cols){
    for(int i = rows-1; i >=0; i--){
        if(i%2==0){
            for (int j = 0; j < cols;j++){
                cout << matrix[i][j] << " ";
            }
        }
        else{
            for (int j = cols-1; j>=0;j--){
                cout << matrix[i][j] << " ";
            }
        }
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

    oppositeWavePrinting(matrix, rows, cols);
    return 0;
}