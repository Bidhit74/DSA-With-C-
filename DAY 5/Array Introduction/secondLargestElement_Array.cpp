// Questions - Find the second largest element in the given array.

#include <iostream>
using namespace std;

int main()
{
    int nSize;
    cout << "How many size of the array"<<endl;
    cin >> nSize;
    int arr[nSize];
    cout << "Add the number of elements in the array"<<endl;
    for(int i = 0; i < nSize; i++){
        cin>>arr[i];
    }

    int max = arr[0];
    for(int i = 0; i < nSize; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    int secondLargest = INT_MIN;

    for(int i = 0; i < nSize;i++){
        if(secondLargest < arr[i] && arr[i] != max){
            secondLargest = arr[i];
            cout << secondLargest << endl;
        }
    }
    
    cout << "Second largest element from array is " << secondLargest << endl;
    return 0;
}