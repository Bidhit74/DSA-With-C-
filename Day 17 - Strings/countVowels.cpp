// Question : Input a string of lenght n and count all the vowels in the given string.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Bidhit";
    int count = 0;

    for(int i = 0; str[i]!='\0'; i++){
        if(str[i]=='a' || str[i]=='e' ||str[i]=='i' || str[i]=='o' || str[i]=='u')
            count++;
    }
    cout << "Vowels : " << count << endl;

    return 0;
}