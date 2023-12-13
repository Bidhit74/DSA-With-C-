#include<iostream>
using namespace std;
// Here original array is passed by default
void incr(int arr[],int size){ // good practice to pass size along with the array
    arr[1] = arr[1] + 10;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<arr[1]<<endl; // 2 is printed
    incr(arr,5); 
    cout<<arr[1]; // Actual array is updated (2+10 = 12 is printed)
    return 0;
}