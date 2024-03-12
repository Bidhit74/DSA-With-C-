// Question : Given a sentence 'str' , return the word that is occurring most number of times in that sentence.

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    string str = "Bidhit is a math well teacher . He well is a DSA mentor well teacher";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    // cout << "{";
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] <<", ";
    // }
    // cout << "}" << endl;
    sort(v.begin(), v.end());
    // cout << "{";
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] <<", ";
    // }
    // cout << "}" << endl;

    int count = 1;
    int maxCount = 1;
    for(int i = 1; i < v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else
            count = 1;
        maxCount = max(maxCount, count);
    }

    count = 1;
    for(int i = 1; i < v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else
            count = 1;
        if(maxCount==count){
            cout << v[i] << " " << maxCount << endl;
        }
    }
    return 0;
}