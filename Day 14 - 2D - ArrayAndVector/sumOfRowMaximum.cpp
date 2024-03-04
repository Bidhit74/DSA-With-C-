// Question : Write a program to print the row number & sum having the maximum sum in a given matrix

// 1 2 3 4  : sum = 10
// 5 6 7 8  : sum = 26
// 9 10 11 12  : sum = 42

//output Index : 3  and max sum : 42

#include <iostream>
#include <vector>
using namespace std;

void printIndexMaxSum(vector<vector<int>> &matrix){
    int index = 0; int maxSum = INT_MIN;
    for(int i = 0; i < matrix.size();i++){
        int sum = 0;
        for(int j = 0; j < matrix[0].size();j++){
            sum += matrix[i][j];
        }
        if(sum>maxSum){
            maxSum = sum;
            index = i+1;
        }
    }

    cout <<"Max sum: " << maxSum <<" Index : "<< index << endl;
}

int main()
{
    vector<vector<int>> Matrix = {{1, 2, 3, 4}, {5, 6, 7 ,8}, {9 ,10, 11, 12}};
    printIndexMaxSum(Matrix);
    return 0;
}