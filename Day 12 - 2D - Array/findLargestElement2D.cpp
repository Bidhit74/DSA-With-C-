// Question : Write a c++ program to find the largest element of a given 2D array of integers.

#include <iostream>
using namespace std;

int findLargestElement(int nums[][3] , int n, int m){
    int max = INT_MIN;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(nums[i][j]>max){
                max = nums[i][j];
            }
        }
    }
    return max;
}

int main()
{
    int n = 3, m = 3;
    int num[3][3] = {{1,12,3}, {4,15,6}, {7,8,9}};

    for (int i = 0; i < 3;i++){
        for(int j = 0; j < 3;j++){
            cout << num[i][j] << " ";
        }
        cout << endl;
    }

    cout <<"largest element of a given 2D array of integers:  " << findLargestElement(num,n,m) << endl;

        return 0;
}