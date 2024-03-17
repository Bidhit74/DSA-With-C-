#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v(5);
    cout << "Enter the number: ";

    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end()); // T.C : O(nlogn) // This is sort in Assending order

    for(int i = 0; i < v.size(); i++){
        cout<< v[i] << " ";
    }

    return 0;
}