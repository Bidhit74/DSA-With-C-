#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> Arr{10, 20, 30, 40, 50, 60,70,75, 80, 100};
    int sum;
    cout << "Enter the sum number you want to sum of pairs:  ";
    cin>>sum;
    cout << " Your sum : " << sum << "\n Your all pairs\n";
    for(int i=0; i<Arr.size(); i++) {
        int element = Arr[i];
        for(int j=i+1; j<Arr.size(); j++) {

            // // All elements of pairs in your array
            // cout << "(" << element << ", " << Arr[j] << ")" << endl;

            if(element + Arr[j] == sum){
                cout << "(" << element << ", " << Arr[j] << ")" << endl;
            }
        }
    }

    return 0;
}