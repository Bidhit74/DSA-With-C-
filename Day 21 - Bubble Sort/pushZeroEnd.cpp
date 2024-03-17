// Question Push Zeroes to end while maintaining the relative order of other elements. (Using bubble sort);
// Example;
// input arr: {5, 0, 1,2,0,0,4,0,3};
// Output arr: {5,1,2,4,3,0,0,0,0};

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5,1,2,4,3,0,0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n-1; i++){
        bool flag = true;
        for (int j = 0; j < n - i - 1;j++){
            if(arr[j]==0 && arr[j+1]!=0){
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if(flag) break;
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}