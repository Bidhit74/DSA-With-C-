// Question - WAP to find the largest three elements in the array.

#include <iostream>
#include <vector>
using namespace std;

void threeLargeElement(int arr[], int n){
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if(arr[i] > max1){
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if(max2<arr[i]){
            max3 = max2;
            max2 = arr[i];
        }
        else if(max3<arr[i]){
            max3 = arr[i];
        }
    }

    if(max1 == INT_MIN)
        cout << "No maximum number ";
    else 
        cout << "First Maximum Number : " << max1 << endl;

    if(max2 == INT_MIN)
        cout << "No Second maximum number ";
    else 
        cout << "Second Maximum Number : " << max2 << endl;

    if(max3 == INT_MIN)
        cout << "No Third maximum number ";
    else 
        cout << "Third Maximum Number : " << max3 << endl;
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

    threeLargeElement(arr, n);

    return 0;
}