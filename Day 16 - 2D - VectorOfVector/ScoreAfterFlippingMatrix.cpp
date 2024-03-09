// leetcode = 861. Score After Flipping Matrix
// You are given an m x n binary matrix grid.

// A move consists of choosing any row or column and toggling each value in that row or column (i.e., changing all 0's to 1's, and all 1's to 0's).

// Every row of the matrix is interpreted as a binary number, and the score of the matrix is the sum of these numbers.

// Return the highest possible score after making any number of moves (including zero moves).

// Input: grid = [[0,0,1,1],[1,0,1,0],[1,1,0,0]]
// Output: 39
// Explanation: 0b1111 + 0b1001 + 0b1111 = 15 + 9 + 15 = 39

#include <iostream>
#include <vector>
using namespace std;

int matrixScore(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        //Making the first all columns 1's
        for(int i = 0; i<rows;i++){
            if(grid[i][0]==0){
                for(int j =0; j<cols; j++){
                    // Flipping The column
                    if(grid[i][j]==0) grid[i][j] = 1;
                    else grid[i][j] = 0;
                }
            }
        }

        //Flip the column where numZero > numOne
        for(int j = 0; j<cols; j++){
            int numZero = 0;
            int numOne = 0;
            for(int i = 0; i<rows; i++){
                if(grid[i][j]==0) numZero++;
                else numOne++;
            }
            if(numZero > numOne){
                for(int i = 0; i<rows; i++){
                    // Flip
                    if(grid[i][j]==0) grid[i][j] = 1;
                    else grid[i][j] = 0;
                }
            }
        }
        // Score After Flipping Matrix
        int score = 0;
        for(int i =0; i<rows; i++){
            int x = 1;
            for(int j = cols-1; j>=0; j--){
                score += grid[i][j] * x;
                x *= 2; 
            }
        }
    return score; 
}

int main()
{
    vector<vector<int>> grid = {{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    cout << "Output : " << matrixScore(grid);
    return 0;
}