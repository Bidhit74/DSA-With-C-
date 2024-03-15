// Question : Given array of size n+1 consisting of integers from 1 to n one of the elements is duplicate element.


// Method - 1 : (brute force)
// Observations : Time Consuming but space efficient.
#include <iostream>
#include <vector>
using namespace std;

// int main()
// {
//     vector<int> arr = {6, 3, 2, 4, 1, 7, 2, 9};
//     int n = arr.size();
//     bool flag = false;

//     for(int i = 0; i < n-1; i++){
//         for(int j = i+1; j < n; j++){
//             if(arr[i] == arr[j]){
//                 cout << arr[i];
//                 flag = true;
//                 break;
//             }
//         }
//         if(flag== true) break;
//     }
//     return 0;
// }

// Method - 2 : (Another method) 
// Observation : Time Efficient but space consuming
// problem : We are using extra space

// int main()
// {
//     vector<int> arr = {3, 2, 1, 6, 2, 5};
//     int n = arr.size();
//     vector<int> v(n,0); // using extra space
//     bool flag = false;
//     for(int i = 0; i < n; i++){
//         v[arr[i]] += 1;
//         if(v[arr[i]]==2){
//             cout << arr[i] << endl;
//             flag = true;
//             break;
//         }
//     }
    
//     if(flag) cout << "Duplicate availabe" << endl;
//     else cout << "Duplicate not availabe" << endl;
    
//     return 0;
// }


// Method - 3 : (Using Math) Best Method 
// Observation : Time and space is efficient

int main()
{ 
    vector<int> arr = {6,3,2,4,5,1,5};
    int n = arr.size()-1;
    int sum = 0;
    for(int i = 0; i<=n; i++){
        sum += arr[i];
    }
    int s = n *(n+1)/2;

    cout << "Duplicate availabe: " <<(sum - s)<< " s: "<< s<< " sum : "<< sum<<endl;

    
    return 0;
}