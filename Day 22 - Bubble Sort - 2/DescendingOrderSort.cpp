// Question : Sort the array in descending order of using bubble sort.
// Example : 5 3 4 8 2 1 7
// Output : 8 7 5 4 3 2 1 

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& vector){
    for(int i = 0; i < vector.size();i++){
        cout << vector[i] << " ";
    }
    cout << endl;
}

void printDecreasingOrder(vector<int> &v){
    for(int i=0; i<v.size()-1;i++){
        bool flag = false;
        for(int j=0; j<v.size()-(1+i);j++){
            if(v[j]<v[j+1]){
                swap(v[j],v[j+1]);
                flag = true;
            }
        }
        if(!flag) break;
    }
}

int main()
{
    vector<int> v = {5, 3, 4, 8, 2, 1, 7};
    printVector(v);
    printDecreasingOrder(v);
    printVector(v);

    return 0;
}