#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &vector){
    for(auto ele : vector){
        cout << ele << " ";
    }
    cout << endl;
}

//Insertion Sort
//Time and Space Complexity
// Space Complexity : O(1)
// Time Complexity
// Best Case : O(n)
// Average Case : O(n^2)
// Wrost Case : O(n^2)
// Insertion Sort is Stable Algorithm

// void InsertionSort(vector<int> &vector){
//     int n = vector.size();
//     for(int i = 1; i < n; i++){
//         for (int j = i; j>0;j--){
//             if(vector[j] < vector[j-1]){
//                 swap(vector[j], vector[j-1]);
//             }
//             else{
//                 break;
//             }
//         }
//     }
// }

// Or

void InsertionSort(vector<int> &vector){
    int n = vector.size();
    for(int i = 1; i < n; i++){
        int j = i;
        while(j>0 &&(vector[j] < vector[j-1])){
            swap(vector[j], vector[j-1]);
            j--;
        }
    }
}

int main()
{
    vector<int> v = {6, 5, 4, 3, 2, 1};
    printVector(v);
    InsertionSort(v);
    printVector(v);
    return 0;
}