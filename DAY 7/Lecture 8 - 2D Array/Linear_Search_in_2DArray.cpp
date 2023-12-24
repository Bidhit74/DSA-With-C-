// Linear Search in 2D Array 
// problem
// 1 2 3
// 4 5 6
// 7 8 9
// Searching = 8
// output = True/False

#include <iostream>
using namespace std;

bool linearSearch2DArray(int arr[][3],int rows,int cols,int search){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==search){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3, col = 3;
    int search = 15;
    if(linearSearch2DArray(arr, row,col,search)){
        cout << "Searching = " << search << " : True"<<endl;
    }
    else{
        cout << "Searching = " << search << " : False"<<endl;
    }

    return 0;
}