// Question - Find the last occurrence of x in the array or vector.

#include <iostream>
#include <vector>
using namespace std;

void lastOccurence(vector<int> &brr,int x){
    for (int i = brr.size(); i >= 0; i--){
        if(brr[i] == x){
            cout << "Last Occurence or Index is : " << i+1 << endl;
            break;
        }
    }
}

int main()
{
    vector<int> arr{10, 15, 30, 35, 50,30};
    int search = 30;

    lastOccurence(arr, search);
    return 0;
}