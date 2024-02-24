// Question -- Find the difference between the sum of elements at even indices to the sum of elements at odd indices

#include <iostream>
using namespace std;

int sumOfEven(int arr[] , int n){
    int sum = 0;
    for(int i=0; i<n; i+=2){
        sum += arr[i];
    }
    return sum;
}

int sumOfOdd(int arr[] , int n){
    int sum = 0;
    for(int i=1; i<n; i+=2){
        sum += arr[i];
    }
    return sum;
}

int sumOfEven_Odd(int arr[] , int n){
    int sum = 0;
    for(int i=0; i<n; i+=2){
        sum += arr[i];
    }
    int sum1 = 0;
    for(int i=1; i<n; i+=2){
        sum1 += arr[i];
    }
    return sum - sum1;
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

    cout << "Sum of even elements : " << sumOfEven(arr, n) << endl;
    cout << "Sum of odd elements : " << sumOfOdd(arr, n) << endl;
    // cout << "Differance between sum of even and sum of odd elements : " << (sumOfEven(arr, n) - sumOfOdd(arr, n) )<< endl;
    cout << "Differance between sum of even and sum of odd elements : " << sumOfEven_Odd(arr , n)<< endl;
    return 0;
}