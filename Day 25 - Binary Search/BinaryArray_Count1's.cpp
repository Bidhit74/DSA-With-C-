// Question : Given a sorted binary array , efficiently count the total number of 1's in it.
//By Using Binary Search
//Time Complexity : O(long n)

#include <iostream>
using namespace std;

int BinarySortedArray_Count1s(int arr[], int size){
    int s = 0;
    int e = size - 1;
    int ans = 0;
    while(s <= e){
        int m = s + (e - s) / 2;
        if(arr[m] == 1){
            if(arr[m-1]!=1){
                ans = size - m;
                break;
            }
            else{
                e = m - 1;
            }
        }
        else{
            if(arr[m+1]==1){
                ans = size - (m + 1);
                break;
            }
            else{
                s = m + 1;
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1};
    int size = 10;

    int result = BinarySortedArray_Count1s(arr, size);
    cout << "Binary Sorted Array Number of one's : " << result << endl;
    
    return 0;
}