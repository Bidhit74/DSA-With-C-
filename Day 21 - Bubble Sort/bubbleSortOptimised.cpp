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
    // Bubble Sorting Algorithm code efficient way
    //Time Complexity :
    // Best Case : O(n)
    // Average Case : O(n^2)
    //Wrost Case:  O(n^2)
    // Space Complexity : O(1)

    for(int i = 0; i < n-1; i++){
        int flag = true;
        for (int j = 0; j < n - 1 - i; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                flag = false;
            }
        }
        if(flag) break;
    }

    cout << endl;

    // printing array
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}