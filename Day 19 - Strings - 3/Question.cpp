// Question : Given n string consisting of digits from 0 to 9. Return the index of string which has maximum value. (Take 0 based indexing)

// Example : "0123, 0023, 456, 00182, 940, 2901";
// Ouput : 2901

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string str = "0123, 0023, 456, 00182, 940, 2901";
    stringstream ss(str);
    string temp;
    vector<int> v;
    while(ss >> temp){
        v.push_back(stoi(temp));
    }

    int max = INT_MIN;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > max)
            max = v[i];
    }

    cout << "max: " << max << endl;
    return 0;
}