// Question - Write a program to print the multiplication of two matrices given by the user.

#include <iostream>
#include <vector>
using namespace std;

// Function to print a matrix
void printMatrix(vector<vector<int>> &matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl; // Print a newline after each row
    }
}

// Function to calculate and print the multiplication of two matrices
void printMultiplicationMatrix(vector<vector<int>> &matrix, vector<vector<int>> &matrix1, int rows, int cols, int rows1, int cols1) {
    // Check if matrices can be multiplied (cols of matrix must equal rows1 of matrix1)
    if (cols != rows1) {
        cout << "Error: Matrices cannot be multiplied.(cols of matrix must equal rows1 of matrix1)" << endl;
        return;
    }

    // Create a resultant matrix of appropriate dimensions
    vector<vector<int>> multiplicationMatrix(rows, vector<int>(cols1));

    // Perform matrix multiplication
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols1; j++) {
            for (int k = 0; k < rows1; k++) {
                multiplicationMatrix[i][j] += matrix[i][k] * matrix1[k][j];
            }
        }
    }

    // Print the result (multiplicationMatrix)
    printMatrix(multiplicationMatrix, rows, cols1);
}

int main() {
    int rows, cols;   
    cout << "Enter the first matrix rows and cols num : ";
    cin >> rows >> cols;
    // Create and input the first matrix
    cout << "Enter the first matrix : ";
    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    // Create and input the second matrix 
    int rows1, cols1;
    cout << "Enter the second matrix rows and cols num  : ";
    cin >> rows1 >> cols1;

    cout << "Enter the second matrix : ";
    vector<vector<int>> matrix1(rows1, vector<int>(cols1));
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Print the first matrix
    printMatrix(matrix, rows, cols); 
    // Print the second matrix
    cout << "X" << endl;
    printMatrix(matrix1, rows1, cols1);
    cout << "Equal(=)" << endl;
    // Multiply the matrices and print the result
    printMultiplicationMatrix(matrix, matrix1, rows, cols, rows1, cols1);

    return 0;
} 
