// Missing Elements From An Array With Duplicates.
// N = Size of array
// Constraint : a[i] belongsTo [1,N]
// arr = {1, 3, 5, 3, 4};
// output = 2

#include <iostream>
using namespace std;

// void printMinsingElement(int *arr, int n){
//     // Visited Methods Used
//     for(int i=0; i<n;i++){
//         int index = abs(arr[i]);
//         if(arr[index -1] >0){
//             arr[index-1] *= -1;
//         }
//     }
    
//     cout << "All value visited method" << endl;
//     // print all value visited method use after array
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << "\nMissing Element: " ;
//     // Missing Element Finding code
//     for(int i=0; i<n; i++){
//         if(arr[i]>0){
//             cout << i+1 << " ";
//         }
//     }
// }


// OR
void printMinsingElement(int *arr, int n){
    // Method - 2 Sorting to swapping method
    int i = 0;

    while(i<n){
        int index = arr[i] -1;
        if(arr[i] != arr[index]){
            swap(arr[i], arr[index]);
        }
        else{
            i++;
        }
    }
    cout << "All Element" << endl;
    // print all value
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << "\nMissing Element: " ;
    for(int i=0; i<n; i++){
        if(arr[i] != i+1){
            cout << i+1 << " ";
        }
    }
}

int main()
{
    int arr[]={1, 3, 5, 3, 4,2,3};
    int n  = sizeof(arr)/sizeof(n);
    
    printMinsingElement(arr,n);
    return 0;
}