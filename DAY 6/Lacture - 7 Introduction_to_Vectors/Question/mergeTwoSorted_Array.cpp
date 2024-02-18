// Question - Merge two sorted arrays.

#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeToArray(vector<int> &arr1, vector<int> &arr2) {
    int f = 0, s = 0, t = 0; // arr1 , arr2, result
    int fSize = arr1.size();
    int sSize = arr2.size();
    vector<int> result(fSize + sSize);

    while(f < fSize && s < sSize){
        if(arr1[f]<arr2[s]){
            result[t] = arr1[f];
            f++;
        }
        else{
            result[t] = arr2[s];
            s++;
        }
        t++;
    }

    // For remaning parts

    if(f == fSize){ // arr1 ke sare elements le chuka hu
        while(s <=sSize){
            result[t] = arr2[s];
            s++, t++;
        }
    }

    if(s == sSize){ // arr2 ke sare elements le chuka hu
        while(f <=fSize){
            result[t] = arr2[f];
            f++, t++;
        }
    }
    return result;
}


int main()
{
    vector<int> arr1 = {1,3,5,7,9};
    vector<int> arr2 = {2,4,5,6,8,10,12};

    vector<int>v = mergeToArray(arr1, arr2);
    for(int i = 0; i <v.size(); i++){
        cout << v[i] << " ";
    }


    return 0;
}