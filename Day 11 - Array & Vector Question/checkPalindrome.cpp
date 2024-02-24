// Question -- if an array contains n elements, then check if the given array is a palindrome or not.

// Example = [1, 2, 3, 2, 1] // ulta bhi  = [1, 2, 3, 2, 1]
// This Example is palindrome


#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int n){
    for (int i = 0; i < n / 2; i++){
        if(arr[i] != arr[(n-1) - i]){
                return false;
            }
    }
    return true;
}

int main()
{
    int n;
    int arr[n];
    cout << "How much size of the array: ";
    cin >> n;
    cout << "Adding the elements of the array :" << endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    if(isPalindrome(arr,n)){
        cout << "Yes, this is a palindrome";
    }
    else{
        cout << "No, this is a palindrome";
    }
        
    return 0;
}