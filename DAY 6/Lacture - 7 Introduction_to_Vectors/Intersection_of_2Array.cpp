// Inter section of two arrays:
// arrA = {4,5,9,10,12}
// arrB = {8,5,10,15,17}
// output = {5,10}
#include <iostream>
#include<vector>
using namespace std;

vector<int> intersectionArray(vector<int>arrA,vector<int>arrB){
    vector<int> answer;
    for(int i=0;i<arrA.size();i++){
        int element = arrA[i];
        for(int j=0;j<arrB.size();j++){
            if(element==arrB[j]){
                // firse check na kare esily mark kiye hai
                arrB[j] = INT_MIN;
                answer.push_back(element);
                element = INT_MIN;
            }
        }
    }
    return answer;
}

int main()
{
    vector<int> arrA;
    vector<int> arrB;
    arrA = {4, 5, 9, 10, 12,10};
    arrB = {8, 5, 10, 15};

    for(auto value:intersectionArray(arrA, arrB)){
        cout << value << " ";
    }
    return 0;
}