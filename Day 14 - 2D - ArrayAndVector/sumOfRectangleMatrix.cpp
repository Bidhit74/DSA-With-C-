// Question : Given a matrix "Matrix" of dimension n*m and 2 coordinates (l1,r1) and (l2,r2). Return the sum of the rectangle from (l1,r1) to (l2,r2).
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// coordinates(l1, r1)(0, 1), coordinates(l2, r2)(1, 3);
// rectangle from
// 2 3 4
// 6 7 8
//output sum = 30

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> Matrix = {{1, 2, 3, 4}, {5, 6, 7 ,8}, {9 ,10, 11, 12}};
    int l1 = 1, l2 = 1;
    int r1 = 3, r2 = 1;
    int sum = 0;
    for(int i = min(l1,l2); i <=max(l1,l2); i++){
        for(int j = min(r1,r2); j <= max(r1,r2); j++){
            sum += Matrix[i][j];
        }
    }
    cout << "sum of the rectangle from (l1,r1) to (l2,r2) : " << sum << endl;
    return 0;
}