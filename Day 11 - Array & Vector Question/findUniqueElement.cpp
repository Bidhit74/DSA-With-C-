// Question -- Find the unique number in a given array where all the elements are being repeated twice with one value being unique.

// Example - [2 , 3, 2 , 3 , 5 ,4 , 5]; 
// Output = 4

#include <iostream>
using namespace std;

void findUniqueElement(int arr [], int n){
    for(int i = 0; i < n; i++){
        int count = 0;
        for (int j = i+1; j < n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count == 0){
            cout << arr[i];
            break;
        }
    }
}

int main()
{
    int n;
    int arr[n];
    cout << "How much size of the array: ";
    cin >> n;
    cout << "Adding the elements of the array :" << endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    findUniqueElement(arr, n);
    
    return 0;
}