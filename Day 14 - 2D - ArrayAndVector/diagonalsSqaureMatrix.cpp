// Question : Write a program to print the elements of both diagonals in a sqaure matrix.
// Example : Matrix 3x3
// 1 2 3
// 4 5 6
// 7 8 9
// Output:
// 1   3
//   5 
// 7   9

#include <iostream>
#include <vector>
using namespace std;

void printDiagonalsSqaureMatrix(vector<vector<int>> &matrix){
    int n = matrix.size();

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j || i+j == n-1){
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
    printDiagonalsSqaureMatrix(Matrix);
    return 0;
}
