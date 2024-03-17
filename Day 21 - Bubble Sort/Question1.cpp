// Question : Sort a Sorting in descending order of values associated with after removal of values smaller than X. using bubble sort
// Example:
// intput : string = "AZYZXBDJKX"
//output : before sorting str: "ZYZXX"  After sorting str: "ZZYXX"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "AZYZXBDJKX";
    string str;
    int n = s.length();
    for(int i = 0; i < n; i++){
        if(s[i] >= 'X'){
            str.push_back(s[i]);
        }
    }

    cout << "before sorting str: ";
    for(int i = 0; i < str.length(); i++){
        cout << str[i];
    }
    cout << endl;
    for(int i = 0; i < str.length()-1; i++){
        int flag = true;
        for (int j = 0; j < str.length()-1 - i; j++){
            if(str[j]<str[j+1]){
                swap(str[j],str[j+1]);
                flag = false;
            }
        }
        if(flag) break;
    }
    cout << "After sorting str: ";
    for(int i = 0; i < str.length(); i++){
        cout << str[i];
    }
    return 0;
}