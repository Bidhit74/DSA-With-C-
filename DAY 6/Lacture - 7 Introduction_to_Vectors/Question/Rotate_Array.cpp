// Question - Rotate the given array 'a' by k step , where k is non-negative.
// Note - k can be greater then n as well where n is the size of array 'a'.

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

int main()
{
    vector<int> v{20, 40, 60, 80, 90, 100};
    int n = v.size();
    int k = 6; // rotate
    if(k>n) k = k%n; // rotate - k can be greater then n

    cout << "Narmal Arrays" << endl;
    for(auto value:v){
        cout << value << " ";
    }
    cout << endl;

    reversePartofArray(0, (n-k)-1, v);
    cout << "First Part Reverse" << endl;
    for(auto value:v){
        cout << value << " ";
    }
    cout << endl;

    reversePartofArray(n-k, n-1, v);
    cout << "Second Part Reverse" << endl;
    for(auto value:v){
        cout << value << " ";
    }
    cout << endl;

    reversePartofArray(0, n-1, v);
    cout << "Overall Part Reverse" << endl;
    for(auto value:v){
        cout << value << " ";
    }


    return 0;
}


