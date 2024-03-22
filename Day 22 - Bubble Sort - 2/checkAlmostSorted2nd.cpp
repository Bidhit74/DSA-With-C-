// Question : Check if given array is almost sorted.
// Note : Elements are at - most one position away.

// example : 4,2,7,9,8 // kuyki one pass is sorted
// output : array is almost sorted

//Best methods

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& vector){
    for(int i = 0; i < vector.size();i++){
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v = {4,2,6,9,8};
    printVector(v);
    int n = v.size();
    //Almost Sorted
    for (int i = 0; i<n-1; i++){
        if(v[i]>=v[i+1]){
            swap(v[i],v[i+1]);
            i++;
        }
    } // 2 4 9 7 8 - Modified array/vector
    printVector(v); 
    //Check if modified array is sorted or not
    bool flag = true;
    for (int i = 0; i<n-1; i++){
        if(v[i]>=v[i+1]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "This array is almost sorted";
    }
    else{
        cout << "This array is not almost sorted";
    }
    cout <<endl<<"This Program Camplexity : S.C : O(1)  and T.C : O(n)";
    return 0;
}