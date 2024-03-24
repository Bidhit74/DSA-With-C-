// Question : Given an array of strings arr[] with all strings in lowercase.Sort given strings using insertion sort and display the sorted array.

#include <iostream>
#include <string>
using namespace std;

void printArray(string arr[], int size){
    cout << "{";
    for (int i = 0; i < size; i++){
        cout << arr[i] << ", ";
    }
    cout << "}";
        cout << endl;
}

void InsertionSort(string arr[], int size){
    for(int i = 1; i < size; i++){
        int j = i;
        while(j>0 && (arr[j]<arr[j-1])){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}


int main()
{
    string arr[] = {"bidhit", "apurv",  "dipak", "rahul","ritik", "manish"};
    int n = 6;

    printArray(arr,n);
    InsertionSort(arr,n);
    printArray(arr,n);

    return 0;
}