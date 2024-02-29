// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]

#include <iostream>
#include <vector>
using namespace std;


void rotate(vector<vector<int>> &matrix) {
    int n = matrix.size(); 
    //Transpose matrix
    for(int i=0; i<n; i++){
        for (int j = i+1;j<n; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    //Reverses each row
    for (int k = 0; k < n;k++){
        int s = 0, e = n-1; // strat and end index of matrix
        while(s<=e){
            int temp = matrix[k][s];
            matrix[k][s] = matrix[k][e];
            matrix[k][e] = temp;
            s++, e--;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
                cout << matrix[i][j] << " ";
            }
        cout << endl;
    }
    return;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(matrix);
    return 0;
}