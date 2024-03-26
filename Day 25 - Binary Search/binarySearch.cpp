#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &vector){
    for(auto ele : vector){
        cout << ele << " ";
    }
    cout << endl;
}


//Time and Space complexity
//S.C : O(1) 
//T.C : O(logn) 
int binarySearch(vector<int> &arr, int target){
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    while(start <= end){
            int mid = start + (end-start)/2;
            if(target == arr[mid]) return mid;
            else if(target < arr[mid]) end = mid-1;
            else
                start = mid + 1;
        }
    return -1;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int search = 50;
    printVector(v);
    cout << "Search : " << search << "  :  "<<binarySearch(v,search)<<endl;
    return 0;
}