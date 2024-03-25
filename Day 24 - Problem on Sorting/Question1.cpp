// Question : Given An array with N distinct elements, convert the given array to a from where all elements are in the range from 0 to N-1. The order of the elements is the same , i.e. 0 is placed in the place of the smallest element, 1 is placed for the second smallest element, .. N-1 is placed for the largest element.

//Example : 19 12 23 8 16
//Output :  3  2  4  0 2

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> &vector){
    for(auto ele : vector){
        cout << ele << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {19, 12, 23, 8, 16};
    vector<int> arr1;
    int n = arr.size();
    int x = 0;
    printVector(arr);
    for(int i = 0; i < n; i++){
        arr1.push_back(arr[i]);
    }
    sort(arr1.begin(), arr1.end());
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr1[i]==arr[j]){
                arr[j] = i;
            }
        }
    }
    printVector(arr);

    //Time Complexity : O(n^2)
    //Space Complexity : O(n)
    return 0;
}