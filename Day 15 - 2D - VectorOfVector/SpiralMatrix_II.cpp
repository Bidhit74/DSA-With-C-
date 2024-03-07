// question : Leetcode 59
// Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>>result(n,vector<int>(n));
    int i = 0, k = 1;
    while (k <= n*n) {
        // Step 1 : Left to Right Traversed Matrix
        int j = i;
        while(j<n-i){
            result[i][j++] = k++;
        }

        // Step 2 : Top to Bottom Traversed Matrix
        j = i + 1;
        while(j<n-i){
            result[j++][n-i-1] = k++;
        }

        // Step 3 : Right to Left Traversed Matrix
        j = n - i - 2;
        while(j>i){
            result[n-i-1][j--] = k++;
        }

        // Step 4 : Bottom to Top Traversed Matrix
        j = n - i - 1;
        while(j>i){
            result[j--][i] = k++;
        }
        
        i++;
    }
    return result;
}


int main()
{
    int n;
    cout << "Enter the Square Matrix Row & Column :";
    cin>>n;
    vector<vector<int>> result = generateMatrix(n);
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}