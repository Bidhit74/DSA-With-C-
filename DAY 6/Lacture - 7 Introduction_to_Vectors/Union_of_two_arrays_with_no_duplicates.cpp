// Brute force approach is discussed -> We will discuss that if ans 
// is returned in sorted array, there are duplicates as well in the array.  ,,,,
#include<iostream>
#include<vector>
using namespace std;

vector<int> unionOfArray(vector<int>arrA,vector<int>arrB){
        vector<int>ans;
        vector<int>answer;
    // putting array elements of a in ans array
    for(int i=0;i<arrA.size();i++){
        ans.push_back(arrA[i]);
    }

    for(int i=0;i<arrB.size();i++){
        bool found = false;
        for(int j=0;j<ans.size();j++){
            if(arrB[i]==ans[j]){
                found = true;
                break;
            }
        }
        if(!found){
            ans.push_back(arrB[i]);
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,3,5,7,9,2};
    vector<int> brr = {2,4,5,6,8,3,7};

    for(auto value:unionOfArray(arr,brr)){
        cout<< value<<" ";
    }
    return 0;
}