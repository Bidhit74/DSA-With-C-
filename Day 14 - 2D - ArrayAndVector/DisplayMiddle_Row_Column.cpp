// Question-- Write a program to display the elements of middle row and middle column of a 2D Matrix.
// Note : Assuming the 2D Array to be a square matrix with odd dimension  example(5x5 , 3x3, 7x7 etc..)

// Example : Matrix 3x3
// 1 2 3
// 4 5 6
// 7 8 9
// Output:
//   2
// 4 5 6
//   8

#include <iostream>
#include <vector>
using namespace std;

void printPlusMatrix(vector<vector<int>> &matrix){
    int n = matrix.size();
    int mid = (n + 1) / 2;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == mid-1){
                cout << matrix[i][j] << " ";
            }
            else if(i == mid-1){
                cout << matrix[i][j] << " ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> Matrix = {{1, 2, 3}, {4, 5, 6}, {7 ,8, 9}};
    printPlusMatrix(Matrix);
    return 0;
}
