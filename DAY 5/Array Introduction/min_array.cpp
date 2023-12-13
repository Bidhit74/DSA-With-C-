// Minimum number in an array

#include <iostream>
using namespace std;

int min(int arr[], int size){
    int min = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {91, 2, 13, 4, 1, 6, 0, 92};
    cout<<"Manimum number this array: "<<min(arr,8);
    return 0;
}