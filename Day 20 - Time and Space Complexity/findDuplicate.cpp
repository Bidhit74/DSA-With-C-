// Question : Given array of size n+1 consisting of integers from 1 to n one of the elements is duplicate element.


// Method - 1 : (brute force)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {6, 3, 2, 4, 1, 7, 2, 9};
    int n = arr.size();
    bool flag = false;

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                cout << arr[i];
                flag = true;
                break;
            }
        }
        if(flag== true) break;
    }
    return 0;
}