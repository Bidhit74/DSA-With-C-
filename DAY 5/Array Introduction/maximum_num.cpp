// Maximum number in an array

#include <iostream>
using namespace std;

int max(int arr[], int size){
    int max = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {8, 2, 13, 4, 10, 6, 18, 9};
    cout<<"Maximum number this array: "<<max(arr,8);
    return 0;
}