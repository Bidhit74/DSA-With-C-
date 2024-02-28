// Question - Write a program to change the given matrix with its transpose.
// leetcode(867)

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int rowSize = matrix.size();
        int colSize = matrix[0].size();
        vector<vector<int>> transpose(colSize, vector<int>(rowSize));
        for (int i = 0; i < colSize; i++) {
            for (int j = 0; j <rowSize ; j++) {
                transpose[i][j] = matrix[j][i];
            }
        }
        return transpose;      
}

int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    for(int i = 0; i < matrix.size();i++){
        for(int j = 0; j < matrix[0].size();j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<int>> Newmatrix = transpose(matrix);

    for(int i = 0; i < Newmatrix.size();i++){
        for(int j = 0; j < Newmatrix[0].size();j++){
            cout << Newmatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}