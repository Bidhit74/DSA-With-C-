// Question : - Write a program to rotate the matrix by 90 degrees (Anti - Clockwise) (square matrix)

// Example : 
// 1 2 3
// 4 5 6
// 7 8 9

// Output :
// 3 6 9
// 2 5 8
// 1 4 7

// Optimized Way solve this problem

#include <iostream>
#include <vector>
using namespace std;

void printRotateAntiClockwise(vector<vector<int>> &matrix){
    int n = matrix.size();
    //Step 1: Matrix Transpose
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i<j){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }

    // Step 2: Reverse each column 
        for(int i = 0; i < n; i++){
        for(int j = 0; j < n/2; j++){
            swap(matrix[j][i],matrix[n-1-j][i]);
        }
    }

    // Matrix Printing Transposing
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " "; 
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> Matrix = {{1, 2, 3}, {4, 5, 6}, {7 ,8, 9}};
    printRotateAntiClockwise(Matrix);
    return 0;
}







/*
#include <iostream>
#include <vector>
using namespace std;

void printRotateAntiClockwise(vector<vector<int>> &matrix){
    int n = matrix.size();
    vector<vector<int>> result;
    for(int i = 0; i < n; i++){
        vector<int> v;
        for(int j = n-1; j >=0; j--){
            v.push_back(matrix[i][j]);  // matrix Swaping
        }
        result.push_back(v);
    }

    // Matrix Printing Transposing
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << result[j][i] << " "; 
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> Matrix = {{1, 2, 3, 4}, {4, 5, 6,7}, {7 ,8, 9,10}, {10,11,12,13}};
    printRotateAntiClockwise(Matrix);
    return 0;
}
*/

