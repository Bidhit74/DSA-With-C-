// Problem : Find the unique element
// input : arr :  {1,2,4,2,1,3,6,5,5,6,4}
// output : unique element : - 3

#include <iostream>
#include<vector>
using namespace std;

int findUniqueElement(vector<int>arr){
    int ans = 0;
    for(int i = 0; i < arr.size(); i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    vector<int> arr;
    arr = {1, 2, 4, 2, 1,7,6, 5, 5, 6, 4};

    cout << "Unique element : " << findUniqueElement(arr);
    return 0;
}