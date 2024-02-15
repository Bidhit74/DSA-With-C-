#include <iostream>
#include <vector>
#include<algorithm> // sort libeary functions
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(30);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(10);

    // v[3] = 60;
    // v.at(4) = 60;

    // cout << v[2] <<endl; 
    // cout << v.at(2) <<endl; // same work At - v[2]

    for(auto v1:v){
        cout << v1 << " ";
    }
    cout <<endl;
    
    // Sorting method in vector
    sort(v.begin(), v.end());

    for (auto v1 : v)
    {
        cout << v1 << " ";
    }

    return 0;
}