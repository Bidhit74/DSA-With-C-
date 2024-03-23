#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &vector){
    //For Each Loops
    // for(int ele : vector){
    //     cout << ele << " ";
    // }
    //Or
    for(auto ele : vector){
        cout << ele << " ";
    }
    cout << endl;
}

//Selection Sort
//Time and Space Complexity
// Space Complexity : O(1)
// Time Complexity
// Best Case : O(n^2)
// Average Case : O(n^2)
// Wrost Case : O(n^2)
// Selection Sort is Unstable Algorithm
void selectionSort(vector<int> &vector){
    int n = vector.size();
    for(int i = 0; i < n-1; i++){
        int min = INT_MAX;
        int minIdx = -1;
        for (int j = i; j < n;j++){
            if(min > vector[j]){
                min = vector[j];
                minIdx = j;
            }
        }
        swap(vector[i], vector[minIdx]);
    }
}

int main()
{
    vector<int> v = {5, 3, 6, 1, 2, 4};
    printVector(v);
    selectionSort(v);
    printVector(v);
    return 0;
}