// Relation between the array and pointer.

#include <iostream>
using namespace std;

int main()
{
    int ar[5] = {5, 1, 2, 3, 4};
    int *ptr = ar; // Same Address
    // int *ptr1 = &ar; // wrong Syntex - doesn't work
    // int *ptr2 = &ar[0]; // Same Address
    // int *ptr3 = ar[0]; // // wrong Syntex - doesn't work

    // cout << ptr << " " << ptr2 << endl;

    for(int i = 0; i <5 ; i++){
        cout << *ptr << " ";
        ptr++;
    }
    return 0;
}