// Question : Given a sorted array of non - negative distinct integers , find the smallest non-negative element in it.

// Example : Given : array = {0, 1, 2, 3, 4, 6, 9, 12};
//Output : 5

#include <iostream>
using namespace std;


//Using Linear search
//O(n)
// int main()
// {
//     int arr[] = {0, 1, 2, 3, 4, 6, 9, 12};
//     int n = 8;

//     for(int i = 0; i < n; i++){
//         if(arr[i]!=i){
//             cout << "Smallest missing element: "<< i << endl;
//             break;
//         }
//     }
//     return 0;
// }

//Using Binary search : Optimized Code
//O(long n)

int main()
{
    int arr[] = {0, 1, 2,3, 4,5, 6, 7};
    int n = 8;
    int s = 0, e = n-1;
    int ans = -1;
    while(s<=e){
        int m = s + (e - s) / 2;
        if(arr[m]==m){
            s = m + 1;
        }
        else{
            ans = m;
            e = m - 1;
        }
    }
    cout << "Smallest missing element: " << ans;
    return 0;
}