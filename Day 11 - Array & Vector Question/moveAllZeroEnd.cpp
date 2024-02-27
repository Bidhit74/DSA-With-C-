// Question : Move all zeros to the end of the array .
// Note : Relative ordering must not be disturbed
// Example : [ 8, 0, 0, 7, 6, 0, 0, 8 ];
// Output : [ 8, 7, 6, 8, 0, 0, 0, 0 ];

#include <iostream>
#include<vector>
using namespace std;

void moveAllZeroEnd(vector<int> &arr){
    int j = 0;
    for(int i = 0; i < arr.size();i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    vector<int> arr = {8, 0, 0, 7, 6, 0, 0, 8};
    moveAllZeroEnd(arr);
    for(auto val:arr){
        cout << val << " ";
    }
    return 0;
}