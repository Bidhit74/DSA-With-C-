// Question : Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive sorted order.
//There is only one repeated number in nums , return this repeated number.
// By using Binary Search : T.C : (log n)

//Example : {1, 2, 3, 4, 5, 5, 6, 7, 8}
//Output : 5

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 5, 6, 7};
    int size = 8;
    int s = 0 , e = size - 1;
    int ans = -1;
    while(s <= e){
        int m = s + (e - s) / 2;
        if(arr[m] == m){
            if(arr[m-1]==arr[m]){
                ans = arr[m];
                break;
            }
            else{
                e = m - 1;
            }
        }
        else if (arr[m] == m+1){
            s = m + 1;
        }
    }
    if(ans<0){
        cout<<"Does not exist repeated number "<<endl;
    }
    else{
        cout<<" Repeated number: "<< ans <<endl;
    }
    return 0;
}