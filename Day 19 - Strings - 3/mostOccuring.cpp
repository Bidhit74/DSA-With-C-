// Question : Given a string consisting of lowercase english alphabets. Print the character that is occurring most number of times.

#include<bits/stdc++.h> // All one header folder
// #include <iostream>
// #include <string>
// #include <algorithm>

using namespace std;

int main()
{
    string str = "Bidhitt";
    vector<int> alphabets(26, 0);

    for(int i = 0; i <str.length(); i++){
        char ch = str[i];
        int ascii = (int)ch;
        alphabets[ascii - 97]++;
    }
    int max = 0;
    for (int i = 0; i < 26;i++){
        if(alphabets[i] > max)
            max = alphabets[i];
    }
    for (int i = 0; i < 26;i++){
        if(alphabets[i]==max){
            int ascii = i + 97;
            char ch = (char)ascii;
            cout << ch << " " << max << endl;
        }
    }

        return 0;
}