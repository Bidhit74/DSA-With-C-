// leetcode = 118. Pascal's Triangle
// Given an integer numRows, return the first numRows of Pascal's triangle.

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generatePascalTriangle(int numRows) {
        vector<vector<int>> result;
        for(int i=1; i<=numRows;i++){
            vector<int>size(i);
            result.push_back(size);
        }

        for(int i=0; i<numRows;i++){
            for(int j =0; j<=i; j++){
                if(j==0||i==j){
                    result[i][j] = 1;
                }
                else{
                    result[i][j] = result[i-1][j]+result[i-1][j-1];
                }
            }
        }
        return result;
    }

int main()
{
    int m;
    cin >> m;
    vector<vector<int>> result = generatePascalTriangle(m);

    for(int i = 0; i < m; i++){
        for(int j = 0; j <m; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}