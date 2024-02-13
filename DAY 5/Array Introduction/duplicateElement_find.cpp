// Question - Given an array, predict if the array contains duplicate or not.

#include <iostream>
using namespace std;

bool is_duplicate(int arr[], int nSize){
    for(int i = 0; i < nSize;i++){
        for (int j = i+1; j < nSize; j++){
            if(arr[i]==arr[j]){
                return true;
                break;
            }
        }
    }
    return false;
}

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

    if(!is_duplicate(arr,nSize)){
        cout << "Duplicate elements is not present";
    }
    else{
        cout << "Duplicate elements is present";
    }
    return 0;
}