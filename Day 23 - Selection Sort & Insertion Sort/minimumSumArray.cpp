//Given an array of digits (value are from 0 to 9) , the task is find the minimum possible sum of two numbers formed from digits of the array. Please note that all digits of the given array must be be used to form the two numbers.

// Example : Array : 5 1 3 4 2
// output Smallest sum: 12345 + 12354 =  24699
// Example : Array : 5 5 3 1 2
// output Smallest sum: 12355 + 12535 =  24890

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &vector){
    for(auto ele : vector){
        cout << ele << " ";
    }
    cout << endl;
}

void InsertionSort(vector<int> &vector){
    int n = vector.size();
    for(int i = 1; i < n; i++){
        int j = i;
        while(j>0 && (vector[j]<vector[j-1])){
            swap(vector[j],vector[j-1]);
            j--;
        }
    }
}

int main()
{
    vector<int> arr = {5, 1, 3, 5, 2};
    int n = arr.size();
    printVector(arr);
    InsertionSort(arr);
    printVector(arr);
    // First Smallest number of vector
    int smallestNum = 0;
    for (int i = 0; i < n; i++){
        smallestNum *= 10;
        smallestNum += arr[i];
    }
    // cout << smallestNum << endl;
    // Second Smallest of vector
    for (int i = n-1; i>0; i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    printVector(arr);
    // Second Smallest number of vector
    int secondSmallestNum = 0;
    for (int i = 0; i < n; i++){
        secondSmallestNum *= 10;
        secondSmallestNum += arr[i];
    }
    // printVector(arr);
    // cout << secondSmallestNum << endl;

    cout << "minimum possible sum of two numbers formed from digits:" << smallestNum + secondSmallestNum << endl;
        return 0;
}