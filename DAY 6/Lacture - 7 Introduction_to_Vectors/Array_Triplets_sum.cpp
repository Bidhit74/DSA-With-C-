#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 30,40,50,60,70};
    int sum;
    cout << "Enter the sum number you want to sum of triplets:  ";
    cin>>sum;
    cout << " Your sum : " << sum << "\n Your all triplets\n";
    for(int i = 0; i <arr.size(); i++){
        int first_element = arr[i];

        for(int j = i+1; j <arr.size(); j++){
            int second_element = arr[j];

            for(int k = j+1; k <arr.size(); k++){
                int third_element = arr[k];
                // All triplets print
                // cout << "{" << first_element << ", " << second_element << ", "<<third_element << "}" << endl;

                if((first_element+second_element+third_element) == sum ){
                    cout << "{" << first_element << ", " << second_element << ", "<<third_element << "}" << endl;
                }
            }
        }
    }
    return 0;
}