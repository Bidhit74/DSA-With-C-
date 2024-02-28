// Question - You are given a matrix / 2D Array of size(n*n)
// change this matrix into its transpose.

// Example :
// 1 2 3
// 4 5 6
// 7 8 9
//Output : Same matrix transpose
// 1 4 7
// 2 5 8
// 3 6 9

#include <iostream>
#include <vector>
using namespace std;

void printMatrix(vector<vector<int>> &matrix, int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 4;
    vector<vector<int>> matrix(n, vector<int>(n));
    matrix= {{10, 11, 12, 13}, {14, 15, 16, 17}, {18, 19, 20, 21}, {22, 23, 24, 25}};
    printMatrix(matrix,n);

    for(int i=0; i<n;i++){
        for(int j= i+1; j<n;j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    cout << endl;
    printMatrix(matrix,n);
    return 0;
}

