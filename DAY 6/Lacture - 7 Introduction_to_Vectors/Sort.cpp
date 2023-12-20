// arr = {0, 1, 0, 1, 1, 0, 1, 0, 1, 1};
// sort = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1};

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>arr{0, 1, 0, 1, 1, 0,1,0,0,1,1,1};
    int i = 0, strat = 0;
    int end = arr.size() - 1;

    while(strat <= end) {
        if(arr[i] == 0){
            swap(arr[strat],arr[i]);
            strat++;
            i++;
        }
        else{
            swap(arr[end],arr[i]);
            end--;
        }
    }
    cout << endl;
    for(auto value : arr){
        cout << value << " ";
    }   
    return 0;
}