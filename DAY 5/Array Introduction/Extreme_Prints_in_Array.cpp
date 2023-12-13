// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6] = {1,2,3,4,5,6};
//     int start = 0;
//     int end = 5;
//     while(start<=end){
//         if(start == end){ // for odd case
//             cout<<arr[start]<<" "; // print once only
//             break;
//         }
//         cout<<arr[start]<<" "; // normal case printing
//         cout<<arr[end]<<" "; // normal case printing
//         start++;// updating start pointer/variable
//         end--; // updating end pointer/variable
//     }
//     return 0;
// }

// problem : arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
// print = 10 100 20 90 30 80 40 70 50 60
// strat = 0 1 2           end = 4 3 2
// 10 50 20 40 30
#include <iostream>
using namespace std;

void extremePrint(int arr[], int size){
    int start = 0 , end = size-1 ;
    for(int i = 0 ; i < size ; i++){
        if(start == (end+1)){ // even size
            break;
        }
        if(start == end){ // odd size
            cout << arr[start] << " ";
            break;
        }
        cout << arr[start] << " " << arr[end] << " ";
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90,100};
    extremePrint(arr,10);
    return 0;
}