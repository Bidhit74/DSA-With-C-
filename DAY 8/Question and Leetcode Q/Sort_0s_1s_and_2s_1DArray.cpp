// arr {1,1,0,0,2,2,1,1}
// output sort = {0,0,1,1,1,1,2,2}

#include <iostream>
#include <vector>
using namespace std;

// vector<int>printSort(vector<int> &arr){
//     int zero, one, two;
//     zero = one = two = 0;
//     // counting method
//     for(int i=0; i<arr.size(); i++){
//         if(arr[i] == 0){
//             zero++;
//         }
//         else if(arr[i]==1){
//             one++;
//         }
//         else{
//             two++;
//         }
//     }
//     // spread
//     int i = 0;
//     while (zero--){
//         arr[i] = 0;
//         i++;
//     }
//     while (one--){
//         arr[i] = 1;
//         i++;
//     }
//     while (two--){
//         arr[i] = 2;
//         i++;
//     }
//     return arr;
// }

// Second Best Approach
// In-place 3-pointer Approach

vector<int>printSort(vector<int> &arr){
    int l = 0 , m = 0 , end;
    end = arr.size()-1;
    while(m < end){
        if(arr[m] == 0){
            swap(arr[l], arr[m]);
            l++; m++;
        }
        else if(arr[m] == 1){
            m++;
        }
        else{
            swap(arr[m], arr[end]);
            end--;
        }
    }
    return arr;
}


int main()
{
    vector<int> arr = {1, 1, 0, 0, 2, 2, 1, 1,0,0};
    for(auto value: printSort(arr)){
        cout << value << " ";
    }
    return 0;
}