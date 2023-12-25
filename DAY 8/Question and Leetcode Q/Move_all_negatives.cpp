// Promble = {1, 2, -3, 4, -5, 6};
// Output = {-3, -5, 1, 2, 4, 6};
// Move all negatives to one side of array
// order kuchh bhi ho sakta hai

#include <iostream>
#include <vector>
using namespace std;

// Dutch National Flag / Two(2) Pointer Algorithm

vector<int>printMoveAllNegative(vector<int>arr){
    int s =0 ,e = arr.size()-1;
    while(s<=e){
        if(arr[s]<0){
            s++;
        }
        else if(arr[e]>0){
            e--;
        }
        else{
            swap(arr[s],arr[e]);
            e--;
        }
    }
    return arr;
}

int main()
{
    vector<int> arr = {-5,1,0 ,2, -3, 4,5, -5, 6,-5,-7,8,10,-9};

    for(auto ans: printMoveAllNegative(arr)){
        cout << ans << " ";
    }
    return 0;
}