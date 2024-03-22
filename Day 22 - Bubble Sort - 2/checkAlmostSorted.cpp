// Question : Check if given array is almost sorted.
// Note : Elements are at - most one position away.

// example : 4,2,7,9,8 // kuyki one pass is sorted
// output : array is almost sorted

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& vector){
    for(int i = 0; i < vector.size();i++){
        cout << vector[i] << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int> &v){
    for(int i=0; i<v.size()-1;i++){
        bool flag = false;
        for(int j=0; j<v.size()-(1+i);j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                flag = true;
            }
        }
        if(!flag) break;
    }
}

int main()
{
    vector<int> v = {4,2,7,9,8};
    printVector(v);
    vector<int> v1; // Using Extra Space
    int n = v.size();
    for(int i=0; i<n; i++){
        v1.push_back(v[i]);
    }
    bubbleSort(v1);
    printVector(v1);
    bool flag = true;
    for (int i = 0; i<n; i++){
        if(i==0){
            if(v1[i]!=v[i] && v1[i]!=v[i+1]){
                flag = false;
                break;
            }
        }
        else if(i == n-1){
            if(v1[i]!=v[i] && v1[i]!=v[i-1]){
                flag = false;
                break;
            }
        }
        else{
            if(v1[i]!=v[i] && v1[i]!=v[i+1] && v1[i]!=v[i-1]){
                flag = false;
                break;
            }
        }
    }
    if(flag){
        cout << "This array is almost sorted";
    }
    else{
        cout << "This array is not almost sorted";
    }
    cout <<endl<<"This Program Camplexity : S.C : O(n)  and T.C : O(n^2)";
    return 0;
}