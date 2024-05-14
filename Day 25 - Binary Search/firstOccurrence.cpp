// Question : Given a sorted array of n elements and a target "X".Find the first occurrence of "X" in the array.If "X" does not exist return -1;
//By Using Binary Search
// Example ::arr = {1, 2, 3, 4, 4, 5, 5, 6, 7, 8};
// X = 4 
// Output index = 3;

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 5, 5, 6, 7, 8};
    int n = 10;
    int s = 0;
    int end = n - 1;
    int X = 9;
    int index = -1;
    while (s <= end)
    {
        int mid = s + (end - s) / 2;
        if(arr[mid] == X){
            if(arr[mid-1] != X){
                index = mid;
                break;
            }
            else {
                end = mid -1;
            }
        }
        else if(arr[mid] < X){ 
            s = mid + 1;
        }
        else { 
            end = mid - 1;
        }
    }

    cout << "X Number Index: " << index;

    return 0;
}