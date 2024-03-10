#include <iostream>
using namespace std;

int main()
{
    // char ch = '.';
    // // char ch1 = '\'; // error
    // char ch1 = '\0'; // not error it is null character

    // cout << ch << " ";
    // cout << ch1 << " ";
    // cout << int(ch1) << " "; // 0

    // char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    char ch[] = {'a', 'b', 'c','\0', 'd', 'e'};

    for(int i = 0; ch[i] != '\0'; i++){
        cout << ch[i] << " ";
    }

    // cout << ch[4] << " ";
    // cout << int(ch[5]) << " "; // Aana to chahiye 0 jo hota hai '\0' lenkin this is compiler based

    cout << "\n" << ch << endl;

    return 0;
}