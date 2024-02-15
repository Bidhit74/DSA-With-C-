// Question - Write a program to a copy the content of one array into another in the reverse order.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1{20,40,60,80,100};
    vector<int> arr2;
    
    for(auto arr: arr1){
        cout << arr << " ";
    }
    cout << endl;
    for(int i = arr1.size()-1; i >=0; i--){
        arr2.push_back(arr1[i]);
    }
    for(auto arr3: arr2){
        cout << arr3 << " ";
    }
    return 0;
}