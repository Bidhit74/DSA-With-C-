// leetcode : 240. Search a 2D Matrix II

// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

// Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
// Output: true

// Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 20
// Output: false

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int i = 0;
        int j = cols-1;

        while(i<rows && j>=0){
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]>target) j--; // left traverse 
            else i++; // down traverse
        }

        return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, { 2, 5, 8, 12, 19 }, { 3, 6, 9, 16, 22 }, { 10, 13, 14, 17, 24 }, { 18, 21, 23, 26, 30 }};

    int tar;
    cout << "Enter the Searching Element : ";
    cin >> tar;
    
    if(searchMatrix(matrix, tar))
        cout << "True";
    else cout << "False";
    return 0;
}