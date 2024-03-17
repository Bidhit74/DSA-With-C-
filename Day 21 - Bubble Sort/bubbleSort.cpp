#include <iostream>
using namespace std;

int main()
{
    int a[6] = {6, 5, 4, 3, 2, 1};
    int n = 6;

    // printing array
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

/*
    // Bubble Sorting Algorithm code  and Time Complexity : O(n^2);
    for(int i = 0; i < n-1; i++){
        for (int j = 0; j < n - 1; j++){
            if(a[j]>a[j+1]){
                // int temp = a[j];
                // a[j] = a[j+1];
                // a[j + 1] = temp;

                // or
                swap(a[j],a[j+1]);
            }
        }
    }
*/

    // Bubble Sorting Algorithm code efficient way and Time Complexity : O(n^2);
    for(int i = 0; i < n-1; i++){
        for (int j = 0; j < n - 1 - i; j++){
            if(a[j]>a[j+1]){
                // int temp = a[j];
                // a[j] = a[j+1];
                // a[j + 1] = temp;

                // or
                swap(a[j],a[j+1]);
            }
        }
    }
    cout << endl;

    // printing array
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}