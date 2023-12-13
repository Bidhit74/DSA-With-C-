// #include<iostream>
// using namespace std;
// bool findElement(int arr[],int size,int key){
//     for(int i = 0;i<size;i++){ // Traversing the array
//         if(arr[i]==key){ // Comparing key with each element
//             return true; // If found then return true and exit from function
//         }
//     }
//     return false; // If traversed all the elements and not found, then return false and exit from function
// }
// int main(){
//     int arr[] = {2,9,6,7,4,12,15};
//     int size = 12;
//     int key = 16;
//     if(findElement(arr,size,key)){ // calling the boolean function
//         cout<<"Found element: " << key; // condition true then just cout found element
//     }
//     else{
//         cout<<"Not Found"; // condition false
//     }
//     return 0;
// }



#include <iostream>
using namespace std;

int linear_search(int arr[],int size,int search){
    for(int i=0;i<size;i++){
        if(arr[i]==search){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    int search = 5;

    if(linear_search(arr, size, search)){
        cout << "This number is availabe this array : " << search;
    }else{
        cout << "This number is not availabe this array : " << search;
    }

    return 0;
}