#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec; // Declare a single vector

    for(int i = 0; i < 5; i++){
        int value; // Temporary variable to hold input
        cin >> value;
        vec.push_back(value); // Add the value to the vector
    }

    for(int i = 0; i < 5; i++){
        cout << vec[i] << " ";
    }

    return 0;
}
