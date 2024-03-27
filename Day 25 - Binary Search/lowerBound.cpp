// Question : Given a sorted integer array and an integer 'x' find the lower bound of x.

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &vector){
    for(auto ele : vector){
        cout << ele << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 20, 30, 40, 50};
    int n = v.size();
    int x = 21;
    
    //Time complexity : O(n)
    // for(int i = 0; i < n; i++){
    //     if(x<=v[i]){
    //         cout << "X:  " << x <<" :  lower bound : " << v[i-1] << endl;
    //         break;
    //     }
    // }

    int low = 0;
    int high = n - 1;
    bool flag = false;
    int midIdx = -1;
    // Time Complexity : O(log n) better than O(n);
    for(int i = 0; i < n; i++){
        int mid = low + (high - low) / 2;
        if(v[mid] == x) {
                flag = true;
                midIdx = mid;
                break;
            }
        else if(v[mid] < x){
                low = mid;
        }
        else{
                high = mid;
            }
    }
    
    if(flag){
        cout <<"X: " << x << endl;
        cout <<"lower Bound: " << v[midIdx-1] << endl;
        cout <<"Upper Bound: " << v[midIdx+1] << endl;
    }
    else{
        cout <<"X: " << x << endl;
        cout <<"lower Bound: " << v[low] << endl;
        cout <<"Upper Bound: " << v[high] << endl;
    }

    return 0;
}