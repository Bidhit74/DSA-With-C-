// Question - Sort the array of 0's and 1's.
#include <iostream>
#include <vector>
using namespace std;

// void mySort(vector<int>&v){
//     int numZero = 0, numOne = 0;
//     for(int i = 0; i < v.size();i++){
//         if(v[i] == 0) 
//             numZero++;
//         else 
//             numOne++;
//     }
//     for(int i = 0; i < v.size();i++){
//         if(i<numZero) 
//             v[i] = 0;
//         else
//             v[i] = 1;
//     }
// }

// Two pointer methods

void mySort(vector<int>&v){
    int start = 0 , end = v.size()-1;
    while(start < end){
        if(v[start] == 1 && v[end] == 0){
            int temp = v[start];
            v[start] = v[end];
            v[end] = temp;
            start++;
            end--;
        }
        if(v[start] == 0) start++;
        if(v[end] == 1) end--;
    }
}

int main(){
    vector<int> v{1, 0 ,1, 0, 1, 0, 1, 1, 1};

    for(auto v1:v){
        cout << v1 << " ";
    }
    cout << endl;

    mySort(v);
    for(auto v1:v){
        cout << v1 << " ";
    }
    return 0;
}