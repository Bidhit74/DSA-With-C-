// Question - Reverse parts of array
// Question - Reverse the array

#include <iostream>
#include <vector>
using namespace std;


void reversePartofArray(int start , int end, vector<int> &arr){
    while(start <= end){
        int temp = arr.at(start);
        arr.at(start) = arr.at(end);
        arr.at(end) = temp;
        start++;
        end--;
    }
}

void reverse(vector<int> &arr){
    int start = 0;
    int end = arr.size()-1;

    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    vector<int> v{20, 40, 60, 80, 90, 100};

    for(auto normal:v){
        cout << normal << " ";
    }

    cout << endl;
    reversePartofArray(1, 4, v);
    for(auto normal:v){
        cout << normal << " ";
    }

    cout << endl;
    reverse(v);
    for(auto normal:v){
        cout << normal << " ";
    }

    return 0;
}