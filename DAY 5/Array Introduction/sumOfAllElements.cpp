// Question - Calculate the sum of all the elements in the given array

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many size of the array"<<endl;
    cin >> n;
    int num[n];
    cout << "Add the number of elements in the array"<<endl;
    for(int i = 0; i < n; i++){
        cin>>num[i];
    }
    int sum = 0;
    for(int i = 0; i < n;i++){
        sum = sum + num[i];
    }
    cout << "Sum of all the elements of array : " << sum << endl;

    return 0;
}