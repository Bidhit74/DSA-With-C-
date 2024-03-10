// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string str = "Bidhit";
//     cout << str << endl;
//     str[3] = 'i'; // In C++, string are mutable/chengable
//     cout << str << endl;
//     return 0;
// }

// Question : Input a string of size n and upadate all the even positions in the string to character 'a'. consider 0 - based indexing

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "How many lenght characters: ";
    cin >> n;
    cout << "Enter the characters: ";
    char str[n];
    for(int i = 0; i < n; i++){
        cin>>str[i];
    }
    cout << str << endl;
    for (int i = 0; i < n; i+=2){
        str[i] = 'a';
    }
    cout << str << endl;
    return 0;
}